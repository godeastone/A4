from selenium import webdriver
from selenium.common.exceptions import TimeoutException
import requests

import argparse
import time
import os
import json
import websocket

def crawl(
    url,
    driver_path,
    binary_path,
    log_extraction_script,
    # profile_dir,
    proxy_port,
    strategy=None,
    page_load_timeout=120,
    file_write_timeout=5
):
    if strategy == "Distributed":
        proxy_port += 20
    if strategy == "Centralized":
        proxy_port = proxy_port
    if strategy == "NA":
        proxy_port = proxy_port
    if strategy is None:
        proxy_port = proxy_port

    chrome_options = webdriver.ChromeOptions()
    chrome_options.add_argument('--disable-application-cache')
    # chrome_options.add_argument('--disable-infobars')
    chrome_options.add_argument('--no-sandbox')
    chrome_options.add_argument('--headless')
    chrome_options.add_argument('--incognito')
    # chrome_options.add_argument('--remote-debugging-port=9222')
    chrome_options.add_argument('--proxy-server=localhost:%d' % proxy_port)
    # chrome_options.add_argument('--user-data-dir=' + profile_dir)
    chrome_options.add_argument('--chrome-binary=' + binary_path)
    chrome_options.add_argument('--user-agent="Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/69.0.3441.0 Safari/537.36"')
    chrome_options.binary_location = binary_path
    
    driver = webdriver.Chrome(driver_path, chrome_options=chrome_options)
    driver.set_page_load_timeout(page_load_timeout)

    try:
        print("[Selenium] Loading %s" % url)
        driver.get(url)
        time.sleep(file_write_timeout)
        try:
            driver.execute_script(log_extraction_script)
        except BaseException as ex:
            print('[Main Frame] Something went wrong: ' + str(ex))
            pass
        time.sleep(file_write_timeout)
    except BaseException as ex:
        print('Something went wrong: ' + str(ex))
        pass
    finally:
        driver.quit()


def crawl_no_proxy(
    url,
    driver_path,
    binary_path,
    log_extraction_script,
    # profile_dir,
    page_source_fpath,
    url_mapping_fpath,
    page_load_timeout=120,
    file_write_timeout=5
):
    chrome_options = webdriver.ChromeOptions()
    chrome_options.add_argument('--ignore-certificate-errors')
    chrome_options.add_argument('--disable-application-cache')
    chrome_options.add_argument('--no-sandbox')
    chrome_options.add_argument('--headless')
    chrome_options.add_argument('--incognito')
    chrome_options.add_argument('--remote-debugging-port=9222')
    # chrome_options.add_argument('--user-data-dir=' + profile_dir)
    chrome_options.add_argument('--chrome-binary=' + binary_path)
    chrome_options.add_argument('--user-agent="Mozilla/5.0 (X11; Ubuntu; Linux x86_64; rv:120.0) Gecko/20100101 Firefox/120.0"')
    chrome_options.binary_location = binary_path

    driver = webdriver.Chrome(driver_path, chrome_options=chrome_options)
    driver.set_page_load_timeout(page_load_timeout)

    try:
        print("[Selenium] Loading %s" % "http://" + url)
        driver.get(page_source_fpath)
        # driver.get("http://" + url)
        
        if len(driver.page_source) < 1000:

            return
        with open(page_source_fpath, 'w') as fout:
            fout.write(driver.page_source)
        mapping_record = '%s,%s\n' % (url, driver.current_url)
        if os.path.isfile(url_mapping_fpath):
            with open(url_mapping_fpath, 'a') as fout:
                fout.write(mapping_record)
        else:
            with open(url_mapping_fpath, 'w') as fout:
                fout.write(mapping_record)
                
        try:
            driver.execute_script(log_extraction_script)
        except BaseException as ex:
            print('[Main Frame] Something went wrong: ' + str(ex))
            pass
        
    except BaseException as ex:
        print('Something went wrong: ' + str(ex))
        pass
    finally:
        driver.quit()


def get_all_html_fnames(crawled_dir):
    all_html_filepaths = os.listdir(crawled_dir)
    return all_html_filepaths


def reduce_url_to_domain(url):
    html_filename = url.split('/')[-1]
    html_filename = html_filename.replace('.html', '')
    return html_filename


parser = argparse.ArgumentParser()
parser.add_argument("--domain", type=str)
parser.add_argument("--mode", type=str)
parser.add_argument("--final-domain", type=str, default=None)
parser.add_argument("--load-modified", action='store_true')
parser.add_argument("--id", type=str, default='1')
parser.add_argument("--strategy", type=str)
parser.add_argument("--weirdo", action='store_true')
args = parser.parse_args()

HOME_DIR = os.getenv("HOME")

crawled_path = '/home/shine/PoisoningAttack/perturb_html/html/'
rendering_stream_dir = HOME_DIR + '/rendering_stream/'
driver_path = '/data4/shine/a4_pipeline/attack-adgraph-pipeline/script/crawler/chromedriver_shitong'
# tested with ChromeDriver version 2.42
binary_path = '/data5/shine/a4_pipeline/AdGraph-Ubuntu-16.04/chrome'
log_extraction_script = "document.createCDATASection('NOTVERYUNIQUESTRING');"
# base_profile_path = HOME_DIR + '/chrome_profile'

domain = args.domain
print("Loading URL: %s | %s" % (domain, args.final_domain))

if args.mode == 'proxy':
    if args.load_modified:
        if int(args.id) % 15 == 0:
            crawl(domain, driver_path, binary_path, log_extraction_script, 6666, strategy=args.strategy)
        elif int(args.id) % 15 == 1:
            crawl(domain, driver_path, binary_path, log_extraction_script, 6667, strategy=args.strategy)
        elif int(args.id) % 15 == 2:
            crawl(domain, driver_path, binary_path, log_extraction_script, 6668, strategy=args.strategy)
        elif int(args.id) % 15 == 3:
            crawl(domain, driver_path, binary_path, log_extraction_script, 6669, strategy=args.strategy)
        elif int(args.id) % 15 == 4:
            crawl(domain, driver_path, binary_path, log_extraction_script, 6670, strategy=args.strategy)
        elif int(args.id) % 15 == 5:
            crawl(domain, driver_path, binary_path, log_extraction_script, 6671, strategy=args.strategy)
        elif int(args.id) % 15 == 6:
            crawl(domain, driver_path, binary_path, log_extraction_script, 6672, strategy=args.strategy)
        elif int(args.id) % 15 == 7:
            crawl(domain, driver_path, binary_path, log_extraction_script, 6673, strategy=args.strategy)
        elif int(args.id) % 15 == 8:
            crawl(domain, driver_path, binary_path, log_extraction_script, 6674, strategy=args.strategy)
        elif int(args.id) % 15 == 9:
            crawl(domain, driver_path, binary_path, log_extraction_script, 6675, strategy=args.strategy)
        elif int(args.id) % 15 == 10:
            crawl(domain, driver_path, binary_path, log_extraction_script, 6676, strategy=args.strategy)
        elif int(args.id) % 15 == 11:
            crawl(domain, driver_path, binary_path, log_extraction_script, 6677, strategy=args.strategy)
        elif int(args.id) % 15 == 12:
            crawl(domain, driver_path, binary_path, log_extraction_script, 6678, strategy=args.strategy)
        elif int(args.id) % 15 == 13:
            crawl(domain, driver_path, binary_path, log_extraction_script, 6679, strategy=args.strategy)
        elif int(args.id) % 15 == 14:
            crawl(domain, driver_path, binary_path, log_extraction_script, 6680, strategy=args.strategy)
    else:
        if args.weirdo:
            crawl(domain, driver_path, binary_path, log_extraction_script, 6666)
        else:
            if int(args.id) % 2 == 0:
                crawl(domain, driver_path, binary_path, log_extraction_script, base_profile_path + args.id, 6666)
            elif int(args.id) % 2 == 1:
                crawl(domain, driver_path, binary_path, log_extraction_script, base_profile_path + args.id, 6667)

elif args.mode == 'no_proxy':
    page_source_fpath = crawled_path + args.domain + '.html'
    url_mapping_fpath = HOME_DIR + '/original_domain_to_final_url_mapping_%s.csv' % args.id
    crawl_no_proxy(domain, driver_path, binary_path, log_extraction_script, page_source_fpath, url_mapping_fpath)

if args.final_domain != None:
    new_timeline_dir = rendering_stream_dir + args.final_domain
    json_fnames = os.listdir(new_timeline_dir)
    timeline_fpath = json_fnames[0]
    if args.load_modified:
        cmd = "mv %s %s" % (
            new_timeline_dir + '/' + timeline_fpath,
            rendering_stream_dir + "/timeline/modified_%s_" % args.strategy + args.domain + '.json'
        )
    else:
        cmd = "mv %s %s" % (
            new_timeline_dir + '/' + timeline_fpath,
            rendering_stream_dir + "/timeline/" + args.domain + '.json'
        )
    os.system(cmd)

    cmd = "rm -rf %s" % (new_timeline_dir)
    os.system(cmd)
