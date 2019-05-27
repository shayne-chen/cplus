#include <string>
#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <set>
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

  bool Str::LegalStr(const std::string& s) {
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
/*
  bool Str::LegalStrFlex(const std::string& s) {
    std::map<char, char> m;
    m['('] = ')';
    m['['] = ']';
    m['{'] = '}';
    if (s.size()<=0) {return true;}
    std::stack<char> s_stack;
    for (char& c:s) {
      if (c=='(' || c=='[' || c=='{') {
        s_stack.push(c);
      } else if (c==')' || c==']' || c=='}') {
        if (c != m[s_stack.pop()]) {
          return false;
        } else {s_stack.pop();}
      }
    }
    return s_stack.size()==0;
  }
*/
  int Str::Index(const std::string& s, const char& c) {
    if (s.size() == 0) {return -1;}
    for (unsigned int i=0;i<s.size();++i) {
      if (c == s[i]) {return i;}
    }
  }

  int Str::Contains(const std::string& s, const std::string& substr) {
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

  bool Str::Sameletter(const std::string& s1, const std::string& s2) {
    if (s1.size() == 0 && s2.size() == 0) {return true;}
    std::set<char> set1;
    std::set<char> set2;
    for (int i=0;i<s1.size();++i) {
      set1.insert(s1[i]);
      set2.insert(s2[i]);
    }
    if (set1.size() != set2.size()) {return false;}
    std::set<char>::iterator it;
    for (it=set1.begin();it!=set1.end();++it) {
      if (set2.count(*it)) {
        continue;
      } else {return false;}
    }
    return true;
  }

  std::string Str::reverse(std::string s) {
    if (s.size()==0) {return s;}
    std::string s1 = "";
    for (int i=s.size()-1;i>=0;i--) {
      s1 = s1 + s[i];
    }
    return s1;
  }

  std::string Str::swap(std::string& s, const char& key1, const char& key2) {
    std::vector<std::string> v;
    int start = -1;
    for (int i=0;i<s.size();++i) {
      if (s[i] == key1) {
        v.emplace_back(s.substr(start+1,i-start-1));
        std::string s1(1,key1);
        v.emplace_back(s1);
        start = i;
      }
      if (s[i] == key2) {
        v.emplace_back(s.substr(start+1,i-start-1));
        std::string s3(1,key2);
        v.emplace_back(s3);
        start = i;
      }
    }
    v.emplace_back(s.substr(start+1,s.size()-start));
    std::string s2 = "";
    for (int j=v.size()-1;j>=0;j--) {
      s2 += v[j];
    }
    return s2;
  }
} // namespace shaw