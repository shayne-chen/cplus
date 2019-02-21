#include <string>
#include <vector>
#include "str.h"

namespace shaw {
  std::vector<std::string> Str::Split(const std::string& s, const std::string& key) {
    std::string::size_type pos1, pos2;
    std::vector<std::string> vec_str;
    pos2 = s.find(key);
    pos1 = 0;
    while(std::string::npos != pos2) {
      vec_str.emplace_back(s.substr(pos1, pos2-pos1));
      pos1 = pos2 + key.size();
      pos2 = s.find(key, pos1);
    }
    if(pos1 != s.length())
      vec_str.emplace_back(s.substr(pos1));
    return vec_str;
  }

  bool Str::Startswith(const std::string& s, const std::string& start) {
  	int s_size = s.size();
  	int start_size = start.size();
  	if (s_size >= start_size) {
  	  if (start == s.substr(0,start_size)) {
  	  	return true;
  	  }
  	}
  	return false;
  }

  bool Str::Endswith(const std::string& s, const std::string& end) {
    int s_size = s.size();
    int end_size = end.size();
    if (s_size >= end_size) {
      if (end == s.substr(s_size-end_size,end_size)) {
      	return true;
      }
    }
    return false;
  }

  std::string Str::Trim(const std::string& s) {
    unsigned int start,end;
    for (start=0;start<s.size();++start) {
  	  if (s[start] =='\t' || s[start] == ' ') {
  	    continue;
      } else
        break;
    }
    for (end=s.size()-1;end>=0;end--) {
      if (s[end] =='\t' || s[end] == ' ') {
        continue;
      } else
        break;
    }
    return s.substr(start,end-start+1);
  }

  std::vector<int> Str::Find(const std::string& s, const char& key) {
    std::vector<int> index;
    for (unsigned int i=0;i<s.size();++i) {
      if (s[i] == key)
        index.emplace_back(i);
    }
    return index;
  }
}