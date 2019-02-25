#include <string>
#include <vector>
#include <stack>
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

  std::string Str::Upper(std::string& src) {
    for (unsigned int i=0;i<src.size();++i) {
      if (src[i]>='a' && src[i]<='z') {
        src[i] -= 32;
      }
    }
    return src;
  }

  std::string Str::Lower(std::string& src) {
    for (unsigned int i=0;i<src.size();++i) {
      if (src[i]>='A' && src[i]<='Z') {
        src[i] += 32;
      }
    }
    return src;
  }

  bool Str::LegalStr(std::string& s) {
    if (s.size()<=0) {return true;}
    std::stack<char> s_stack;
    for (auto& c:s) {
      if (c=='{') {
        s_stack.push(c);
      } else if (c=='}') {
        if (s_stack.size()==0) {
          return false;
        } else {
          s_stack.pop();
        }
      }
    }
    return s_stack.size()==0;
  }

  int Str::Index(std::string& s, char& c) {
    if (s.size() == 0) {return -1;}
    for (unsigned int i=0;i<s.size();++i) {
      if (c == s[i]) {return i;}
    }
  }

  int Str::Contains(std::string& s, std::string& substr) {
    if (s.size() == 0 && substr.size() == 0) {return 0;}
    if (s.size() == 0 && substr.size() >0) {return -1;}
    std::vector<int> v_index = Find(s, substr[0]);
    for (auto& index:v_index) {
      short sub_index = 0;
      short s_index = index;
      while (s[s_index] == substr[sub_index] && sub_index<substr.size()) {
        s_index++;
        sub_index++;
      }
      if (sub_index == substr.size()) {
        return index;
      } else {continue;}
    }
    return -1;
  }
} // namespace shaw