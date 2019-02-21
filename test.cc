#include <iostream>
#include <string>
#include <vector>
#include "file.h"
#include "str.h"

int main(int argc,char* argv[]) {
  const std::string filepath = "/data/shaw/test";
  std::map<std::string,std::string> line_map = shaw::File::ReadLine(filepath);
  std::map<std::string,std::string>::iterator iter;
  iter = line_map.begin();
  while(iter != line_map.end()) {
    std::cout << iter->first << ":" << iter->second <<"."<< std::endl;
    iter++;
  }
  return 0;
}
