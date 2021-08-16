//  MeCab -- Yet Another Part-of-Speech and Morphological Analyzer
//
//
//  Copyright(C) 2001-2006 Taku Kudo <taku@chasen.org>
//  Copyright(C) 2004-2006 Nippon Telegraph and Telephone Corporation
#include <filesystem>
#include "common.h"

namespace MeCab {

std::string Utf8PathToNarrow(const std::string &path) {
  return std::filesystem::u8path(path.c_str()).string();
}

}
