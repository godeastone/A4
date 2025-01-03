#include <iostream>
#include <random>
#include "utilities.h"
#include "json_to_adgraph_parser.h"

std::string generateRandomString(int length) {
    const std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<int> distribution(0, characters.length() - 1);

    std::string randomString;
    for (int i = 0; i < length; ++i) {
        randomString += characters[distribution(generator)];
    }
    return randomString;
}

int main(int argc, char *argv[])
{
    std::string base_directory = argv[1];
    std::string features_directory = base_directory + argv[2];
    std::string mapping_directory = base_directory + argv[3];
    std::string domain = argv[4];
    std::string timeline_filename = argv[5];
    std::string timeline_filepath = base_directory + "timeline/" + timeline_filename;
    // std::string timeline_filepath = base_directory + "modified_timeline/" + timeline_filename;
    std::string randomString = generateRandomString(10);

    std::cout << "Base: " << base_directory << std::endl;
    std::cout << "Features: " << features_directory << std::endl;
    std::cout << "Mapping: " << mapping_directory << std::endl;
    std::cout << "Domain: " << domain << std::endl;
    std::cout << "Timeline file: " << timeline_filepath << std::endl;

    AdGraphAPI::Utilities::ordered_json json_content;
    json_content = AdGraphAPI::Utilities::ReadJSON(timeline_filepath);

    // AdGraphAPI::JSONToAdGraphParser parser_object(json_content["url"].get<std::string>(),
    //                                               features_directory + domain + ".csv",
    //                                               mapping_directory + domain + ".csv");
    AdGraphAPI::JSONToAdGraphParser parser_object(json_content["url"].get<std::string>(),
                                                  features_directory + domain + "@" + randomString + ".csv",
                                                  mapping_directory + domain + "@" + randomString + ".csv");
    parser_object.CreateGraph(json_content);
}
