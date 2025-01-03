// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/element_lookup_trie.cc.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/html/html_tag_names.json5


#include "third_party/blink/renderer/core/html_element_lookup_trie.h"

#include "third_party/blink/renderer/core/html_names.h"

namespace blink {

using namespace HTMLNames;

const AtomicString& lookupHTMLTag(const UChar* data, unsigned length) {
  DCHECK(data);
  DCHECK(length);
  switch (length) {
    case 1:
        switch (data[0]) {
        case 'a':
            return aTag.LocalName();

        case 'b':
            return bTag.LocalName();

        case 'i':
            return iTag.LocalName();

        case 'p':
            return pTag.LocalName();

        case 'q':
            return qTag.LocalName();

        case 's':
            return sTag.LocalName();

        case 'u':
            return uTag.LocalName();

        }
        break;

    case 2:
        switch (data[0]) {
        case 'b':
            if (data[1] == 'r')
                return brTag.LocalName();
            break;

        case 'd':
            switch (data[1]) {
            case 'd':
                return ddTag.LocalName();

            case 'l':
                return dlTag.LocalName();

            case 't':
                return dtTag.LocalName();

            }
            break;

        case 'e':
            if (data[1] == 'm')
                return emTag.LocalName();
            break;

        case 'h':
            switch (data[1]) {
            case '1':
                return h1Tag.LocalName();

            case '2':
                return h2Tag.LocalName();

            case '3':
                return h3Tag.LocalName();

            case '4':
                return h4Tag.LocalName();

            case '5':
                return h5Tag.LocalName();

            case '6':
                return h6Tag.LocalName();

            case 'r':
                return hrTag.LocalName();

            }
            break;

        case 'l':
            if (data[1] == 'i')
                return liTag.LocalName();
            break;

        case 'o':
            if (data[1] == 'l')
                return olTag.LocalName();
            break;

        case 'r':
            switch (data[1]) {
            case 'b':
                return rbTag.LocalName();

            case 'p':
                return rpTag.LocalName();

            case 't':
                return rtTag.LocalName();

            }
            break;

        case 't':
            switch (data[1]) {
            case 'd':
                return tdTag.LocalName();

            case 'h':
                return thTag.LocalName();

            case 'r':
                return trTag.LocalName();

            case 't':
                return ttTag.LocalName();

            }
            break;

        case 'u':
            if (data[1] == 'l')
                return ulTag.LocalName();
            break;

        }
        break;

    case 3:
        switch (data[0]) {
        case 'b':
            switch (data[1]) {
            case 'd':
                switch (data[2]) {
                case 'i':
                    return bdiTag.LocalName();

                case 'o':
                    return bdoTag.LocalName();

                }
                break;

            case 'i':
                if (data[2] == 'g')
                    return bigTag.LocalName();
                break;

            }
            break;

        case 'c':
            if (data[1] == 'o' && data[2] == 'l')
                return colTag.LocalName();
            break;

        case 'd':
            switch (data[1]) {
            case 'e':
                if (data[2] == 'l')
                    return delTag.LocalName();
                break;

            case 'f':
                if (data[2] == 'n')
                    return dfnTag.LocalName();
                break;

            case 'i':
                switch (data[2]) {
                case 'r':
                    return dirTag.LocalName();

                case 'v':
                    return divTag.LocalName();

                }
                break;

            }
            break;

        case 'i':
            switch (data[1]) {
            case 'm':
                if (data[2] == 'g')
                    return imgTag.LocalName();
                break;

            case 'n':
                if (data[2] == 's')
                    return insTag.LocalName();
                break;

            }
            break;

        case 'k':
            if (data[1] == 'b' && data[2] == 'd')
                return kbdTag.LocalName();
            break;

        case 'm':
            if (data[1] == 'a' && data[2] == 'p')
                return mapTag.LocalName();
            break;

        case 'n':
            if (data[1] == 'a' && data[2] == 'v')
                return navTag.LocalName();
            break;

        case 'p':
            if (data[1] == 'r' && data[2] == 'e')
                return preTag.LocalName();
            break;

        case 'r':
            if (data[1] == 't' && data[2] == 'c')
                return rtcTag.LocalName();
            break;

        case 's':
            switch (data[1]) {
            case 'u':
                switch (data[2]) {
                case 'b':
                    return subTag.LocalName();

                case 'p':
                    return supTag.LocalName();

                }
                break;

            }
            break;

        case 'v':
            if (data[1] == 'a' && data[2] == 'r')
                return varTag.LocalName();
            break;

        case 'w':
            if (data[1] == 'b' && data[2] == 'r')
                return wbrTag.LocalName();
            break;

        case 'x':
            if (data[1] == 'm' && data[2] == 'p')
                return xmpTag.LocalName();
            break;

        }
        break;

    case 4:
        switch (data[0]) {
        case 'a':
            switch (data[1]) {
            case 'b':
                if (data[2] == 'b' && data[3] == 'r')
                    return abbrTag.LocalName();
                break;

            case 'r':
                if (data[2] == 'e' && data[3] == 'a')
                    return areaTag.LocalName();
                break;

            }
            break;

        case 'b':
            switch (data[1]) {
            case 'a':
                if (data[2] == 's' && data[3] == 'e')
                    return baseTag.LocalName();
                break;

            case 'o':
                if (data[2] == 'd' && data[3] == 'y')
                    return bodyTag.LocalName();
                break;

            }
            break;

        case 'c':
            switch (data[1]) {
            case 'i':
                if (data[2] == 't' && data[3] == 'e')
                    return citeTag.LocalName();
                break;

            case 'o':
                if (data[2] == 'd' && data[3] == 'e')
                    return codeTag.LocalName();
                break;

            }
            break;

        case 'd':
            if (data[1] == 'a' && data[2] == 't' && data[3] == 'a')
                return dataTag.LocalName();
            break;

        case 'f':
            switch (data[1]) {
            case 'o':
                switch (data[2]) {
                case 'n':
                    if (data[3] == 't')
                        return fontTag.LocalName();
                    break;

                case 'r':
                    if (data[3] == 'm')
                        return formTag.LocalName();
                    break;

                }
                break;

            }
            break;

        case 'h':
            switch (data[1]) {
            case 'e':
                if (data[2] == 'a' && data[3] == 'd')
                    return headTag.LocalName();
                break;

            case 't':
                if (data[2] == 'm' && data[3] == 'l')
                    return htmlTag.LocalName();
                break;

            }
            break;

        case 'l':
            if (data[1] == 'i' && data[2] == 'n' && data[3] == 'k')
                return linkTag.LocalName();
            break;

        case 'm':
            switch (data[1]) {
            case 'a':
                switch (data[2]) {
                case 'i':
                    if (data[3] == 'n')
                        return mainTag.LocalName();
                    break;

                case 'r':
                    if (data[3] == 'k')
                        return markTag.LocalName();
                    break;

                }
                break;

            case 'e':
                switch (data[2]) {
                case 'n':
                    if (data[3] == 'u')
                        return menuTag.LocalName();
                    break;

                case 't':
                    if (data[3] == 'a')
                        return metaTag.LocalName();
                    break;

                }
                break;

            }
            break;

        case 'n':
            if (data[1] == 'o' && data[2] == 'b' && data[3] == 'r')
                return nobrTag.LocalName();
            break;

        case 'r':
            if (data[1] == 'u' && data[2] == 'b' && data[3] == 'y')
                return rubyTag.LocalName();
            break;

        case 's':
            switch (data[1]) {
            case 'a':
                if (data[2] == 'm' && data[3] == 'p')
                    return sampTag.LocalName();
                break;

            case 'l':
                if (data[2] == 'o' && data[3] == 't')
                    return slotTag.LocalName();
                break;

            case 'p':
                if (data[2] == 'a' && data[3] == 'n')
                    return spanTag.LocalName();
                break;

            }
            break;

        case 't':
            if (data[1] == 'i' && data[2] == 'm' && data[3] == 'e')
                return timeTag.LocalName();
            break;

        }
        break;

    case 5:
        switch (data[0]) {
        case 'a':
            switch (data[1]) {
            case 's':
                if (data[2] == 'i' && data[3] == 'd' && data[4] == 'e')
                    return asideTag.LocalName();
                break;

            case 'u':
                if (data[2] == 'd' && data[3] == 'i' && data[4] == 'o')
                    return audioTag.LocalName();
                break;

            }
            break;

        case 'e':
            if (data[1] == 'm' && data[2] == 'b' && data[3] == 'e' && data[4] == 'd')
                return embedTag.LocalName();
            break;

        case 'f':
            if (data[1] == 'r' && data[2] == 'a' && data[3] == 'm' && data[4] == 'e')
                return frameTag.LocalName();
            break;

        case 'i':
            switch (data[1]) {
            case 'm':
                if (data[2] == 'a' && data[3] == 'g' && data[4] == 'e')
                    return imageTag.LocalName();
                break;

            case 'n':
                if (data[2] == 'p' && data[3] == 'u' && data[4] == 't')
                    return inputTag.LocalName();
                break;

            }
            break;

        case 'l':
            switch (data[1]) {
            case 'a':
                switch (data[2]) {
                case 'b':
                    if (data[3] == 'e' && data[4] == 'l')
                        return labelTag.LocalName();
                    break;

                case 'y':
                    if (data[3] == 'e' && data[4] == 'r')
                        return layerTag.LocalName();
                    break;

                }
                break;

            }
            break;

        case 'm':
            if (data[1] == 'e' && data[2] == 't' && data[3] == 'e' && data[4] == 'r')
                return meterTag.LocalName();
            break;

        case 'p':
            if (data[1] == 'a' && data[2] == 'r' && data[3] == 'a' && data[4] == 'm')
                return paramTag.LocalName();
            break;

        case 's':
            switch (data[1]) {
            case 'm':
                if (data[2] == 'a' && data[3] == 'l' && data[4] == 'l')
                    return smallTag.LocalName();
                break;

            case 't':
                if (data[2] == 'y' && data[3] == 'l' && data[4] == 'e')
                    return styleTag.LocalName();
                break;

            }
            break;

        case 't':
            switch (data[1]) {
            case 'a':
                if (data[2] == 'b' && data[3] == 'l' && data[4] == 'e')
                    return tableTag.LocalName();
                break;

            case 'b':
                if (data[2] == 'o' && data[3] == 'd' && data[4] == 'y')
                    return tbodyTag.LocalName();
                break;

            case 'f':
                if (data[2] == 'o' && data[3] == 'o' && data[4] == 't')
                    return tfootTag.LocalName();
                break;

            case 'h':
                if (data[2] == 'e' && data[3] == 'a' && data[4] == 'd')
                    return theadTag.LocalName();
                break;

            case 'i':
                if (data[2] == 't' && data[3] == 'l' && data[4] == 'e')
                    return titleTag.LocalName();
                break;

            case 'r':
                if (data[2] == 'a' && data[3] == 'c' && data[4] == 'k')
                    return trackTag.LocalName();
                break;

            }
            break;

        case 'v':
            if (data[1] == 'i' && data[2] == 'd' && data[3] == 'e' && data[4] == 'o')
                return videoTag.LocalName();
            break;

        }
        break;

    case 6:
        switch (data[0]) {
        case 'a':
            if (data[1] == 'p' && data[2] == 'p' && data[3] == 'l' && data[4] == 'e' && data[5] == 't')
                return appletTag.LocalName();
            break;

        case 'b':
            if (data[1] == 'u' && data[2] == 't' && data[3] == 't' && data[4] == 'o' && data[5] == 'n')
                return buttonTag.LocalName();
            break;

        case 'c':
            switch (data[1]) {
            case 'a':
                if (data[2] == 'n' && data[3] == 'v' && data[4] == 'a' && data[5] == 's')
                    return canvasTag.LocalName();
                break;

            case 'e':
                if (data[2] == 'n' && data[3] == 't' && data[4] == 'e' && data[5] == 'r')
                    return centerTag.LocalName();
                break;

            }
            break;

        case 'd':
            if (data[1] == 'i' && data[2] == 'a' && data[3] == 'l' && data[4] == 'o' && data[5] == 'g')
                return dialogTag.LocalName();
            break;

        case 'f':
            switch (data[1]) {
            case 'i':
                if (data[2] == 'g' && data[3] == 'u' && data[4] == 'r' && data[5] == 'e')
                    return figureTag.LocalName();
                break;

            case 'o':
                if (data[2] == 'o' && data[3] == 't' && data[4] == 'e' && data[5] == 'r')
                    return footerTag.LocalName();
                break;

            }
            break;

        case 'h':
            switch (data[1]) {
            case 'e':
                if (data[2] == 'a' && data[3] == 'd' && data[4] == 'e' && data[5] == 'r')
                    return headerTag.LocalName();
                break;

            case 'g':
                if (data[2] == 'r' && data[3] == 'o' && data[4] == 'u' && data[5] == 'p')
                    return hgroupTag.LocalName();
                break;

            }
            break;

        case 'i':
            if (data[1] == 'f' && data[2] == 'r' && data[3] == 'a' && data[4] == 'm' && data[5] == 'e')
                return iframeTag.LocalName();
            break;

        case 'k':
            if (data[1] == 'e' && data[2] == 'y' && data[3] == 'g' && data[4] == 'e' && data[5] == 'n')
                return keygenTag.LocalName();
            break;

        case 'l':
            if (data[1] == 'e' && data[2] == 'g' && data[3] == 'e' && data[4] == 'n' && data[5] == 'd')
                return legendTag.LocalName();
            break;

        case 'o':
            switch (data[1]) {
            case 'b':
                if (data[2] == 'j' && data[3] == 'e' && data[4] == 'c' && data[5] == 't')
                    return objectTag.LocalName();
                break;

            case 'p':
                if (data[2] == 't' && data[3] == 'i' && data[4] == 'o' && data[5] == 'n')
                    return optionTag.LocalName();
                break;

            case 'u':
                if (data[2] == 't' && data[3] == 'p' && data[4] == 'u' && data[5] == 't')
                    return outputTag.LocalName();
                break;

            }
            break;

        case 's':
            switch (data[1]) {
            case 'c':
                if (data[2] == 'r' && data[3] == 'i' && data[4] == 'p' && data[5] == 't')
                    return scriptTag.LocalName();
                break;

            case 'e':
                if (data[2] == 'l' && data[3] == 'e' && data[4] == 'c' && data[5] == 't')
                    return selectTag.LocalName();
                break;

            case 'h':
                if (data[2] == 'a' && data[3] == 'd' && data[4] == 'o' && data[5] == 'w')
                    return shadowTag.LocalName();
                break;

            case 'o':
                if (data[2] == 'u' && data[3] == 'r' && data[4] == 'c' && data[5] == 'e')
                    return sourceTag.LocalName();
                break;

            case 't':
                switch (data[2]) {
                case 'r':
                    switch (data[3]) {
                    case 'i':
                        if (data[4] == 'k' && data[5] == 'e')
                            return strikeTag.LocalName();
                        break;

                    case 'o':
                        if (data[4] == 'n' && data[5] == 'g')
                            return strongTag.LocalName();
                        break;

                    }
                    break;

                }
                break;

            }
            break;

        }
        break;

    case 7:
        switch (data[0]) {
        case 'a':
            switch (data[1]) {
            case 'c':
                if (data[2] == 'r' && data[3] == 'o' && data[4] == 'n' && data[5] == 'y' && data[6] == 'm')
                    return acronymTag.LocalName();
                break;

            case 'd':
                if (data[2] == 'd' && data[3] == 'r' && data[4] == 'e' && data[5] == 's' && data[6] == 's')
                    return addressTag.LocalName();
                break;

            case 'r':
                if (data[2] == 't' && data[3] == 'i' && data[4] == 'c' && data[5] == 'l' && data[6] == 'e')
                    return articleTag.LocalName();
                break;

            }
            break;

        case 'b':
            if (data[1] == 'g' && data[2] == 's' && data[3] == 'o' && data[4] == 'u' && data[5] == 'n' && data[6] == 'd')
                return bgsoundTag.LocalName();
            break;

        case 'c':
            switch (data[1]) {
            case 'a':
                if (data[2] == 'p' && data[3] == 't' && data[4] == 'i' && data[5] == 'o' && data[6] == 'n')
                    return captionTag.LocalName();
                break;

            case 'o':
                switch (data[2]) {
                case 'm':
                    if (data[3] == 'm' && data[4] == 'a' && data[5] == 'n' && data[6] == 'd')
                        return commandTag.LocalName();
                    break;

                case 'n':
                    if (data[3] == 't' && data[4] == 'e' && data[5] == 'n' && data[6] == 't')
                        return contentTag.LocalName();
                    break;

                }
                break;

            }
            break;

        case 'd':
            if (data[1] == 'e' && data[2] == 't' && data[3] == 'a' && data[4] == 'i' && data[5] == 'l' && data[6] == 's')
                return detailsTag.LocalName();
            break;

        case 'l':
            if (data[1] == 'i' && data[2] == 's' && data[3] == 't' && data[4] == 'i' && data[5] == 'n' && data[6] == 'g')
                return listingTag.LocalName();
            break;

        case 'm':
            if (data[1] == 'a' && data[2] == 'r' && data[3] == 'q' && data[4] == 'u' && data[5] == 'e' && data[6] == 'e')
                return marqueeTag.LocalName();
            break;

        case 'n':
            switch (data[1]) {
            case 'o':
                switch (data[2]) {
                case 'e':
                    if (data[3] == 'm' && data[4] == 'b' && data[5] == 'e' && data[6] == 'd')
                        return noembedTag.LocalName();
                    break;

                case 'l':
                    if (data[3] == 'a' && data[4] == 'y' && data[5] == 'e' && data[6] == 'r')
                        return nolayerTag.LocalName();
                    break;

                }
                break;

            }
            break;

        case 'p':
            if (data[1] == 'i' && data[2] == 'c' && data[3] == 't' && data[4] == 'u' && data[5] == 'r' && data[6] == 'e')
                return pictureTag.LocalName();
            break;

        case 's':
            switch (data[1]) {
            case 'e':
                if (data[2] == 'c' && data[3] == 't' && data[4] == 'i' && data[5] == 'o' && data[6] == 'n')
                    return sectionTag.LocalName();
                break;

            case 'u':
                if (data[2] == 'm' && data[3] == 'm' && data[4] == 'a' && data[5] == 'r' && data[6] == 'y')
                    return summaryTag.LocalName();
                break;

            }
            break;

        }
        break;

    case 8:
        switch (data[0]) {
        case 'b':
            if (data[1] == 'a' && data[2] == 's' && data[3] == 'e' && data[4] == 'f' && data[5] == 'o' && data[6] == 'n' && data[7] == 't')
                return basefontTag.LocalName();
            break;

        case 'c':
            if (data[1] == 'o' && data[2] == 'l' && data[3] == 'g' && data[4] == 'r' && data[5] == 'o' && data[6] == 'u' && data[7] == 'p')
                return colgroupTag.LocalName();
            break;

        case 'd':
            if (data[1] == 'a' && data[2] == 't' && data[3] == 'a' && data[4] == 'l' && data[5] == 'i' && data[6] == 's' && data[7] == 't')
                return datalistTag.LocalName();
            break;

        case 'f':
            switch (data[1]) {
            case 'i':
                if (data[2] == 'e' && data[3] == 'l' && data[4] == 'd' && data[5] == 's' && data[6] == 'e' && data[7] == 't')
                    return fieldsetTag.LocalName();
                break;

            case 'r':
                if (data[2] == 'a' && data[3] == 'm' && data[4] == 'e' && data[5] == 's' && data[6] == 'e' && data[7] == 't')
                    return framesetTag.LocalName();
                break;

            }
            break;

        case 'n':
            switch (data[1]) {
            case 'o':
                switch (data[2]) {
                case 'f':
                    if (data[3] == 'r' && data[4] == 'a' && data[5] == 'm' && data[6] == 'e' && data[7] == 's')
                        return noframesTag.LocalName();
                    break;

                case 's':
                    if (data[3] == 'c' && data[4] == 'r' && data[5] == 'i' && data[6] == 'p' && data[7] == 't')
                        return noscriptTag.LocalName();
                    break;

                }
                break;

            }
            break;

        case 'o':
            if (data[1] == 'p' && data[2] == 't' && data[3] == 'g' && data[4] == 'r' && data[5] == 'o' && data[6] == 'u' && data[7] == 'p')
                return optgroupTag.LocalName();
            break;

        case 'p':
            if (data[1] == 'r' && data[2] == 'o' && data[3] == 'g' && data[4] == 'r' && data[5] == 'e' && data[6] == 's' && data[7] == 's')
                return progressTag.LocalName();
            break;

        case 't':
            switch (data[1]) {
            case 'e':
                switch (data[2]) {
                case 'm':
                    if (data[3] == 'p' && data[4] == 'l' && data[5] == 'a' && data[6] == 't' && data[7] == 'e')
                        return templateTag.LocalName();
                    break;

                case 'x':
                    if (data[3] == 't' && data[4] == 'a' && data[5] == 'r' && data[6] == 'e' && data[7] == 'a')
                        return textareaTag.LocalName();
                    break;

                }
                break;

            }
            break;

        }
        break;

    case 9:
        switch (data[0]) {
        case 'p':
            if (data[1] == 'l' && data[2] == 'a' && data[3] == 'i' && data[4] == 'n' && data[5] == 't' && data[6] == 'e' && data[7] == 'x' && data[8] == 't')
                return plaintextTag.LocalName();
            break;

        }
        break;

    case 10:
        switch (data[0]) {
        case 'b':
            if (data[1] == 'l' && data[2] == 'o' && data[3] == 'c' && data[4] == 'k' && data[5] == 'q' && data[6] == 'u' && data[7] == 'o' && data[8] == 't' && data[9] == 'e')
                return blockquoteTag.LocalName();
            break;

        case 'f':
            if (data[1] == 'i' && data[2] == 'g' && data[3] == 'c' && data[4] == 'a' && data[5] == 'p' && data[6] == 't' && data[7] == 'i' && data[8] == 'o' && data[9] == 'n')
                return figcaptionTag.LocalName();
            break;

        }
        break;

    }

  return g_null_atom;
}

}  // namespace blink
