#include <iostream>
#include <string>
#include <vector>
#include "file.h"

int main(int argc,char* argv[]) {
  const std::string filepath = "/data/shaw/test";
  std::map<std::string,std::string> line_map = shaw::File::ReadLine(filepath);
  std::map<std::string,std::string>::iterator iter;
  for(iter=line_map.begin();iter!=line_map.end();iter++) {
    std::cout << iter->first << ":" << iter->second <<"."<< std::endl;
  }
  return 0;
}
