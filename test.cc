#include <iostream>
#include <string>
#include <vector>
#include "file.h"
#include "str.h"

int main(int argc,char* argv[]) {
  // const std::string filepath = "/data/shaw/test";
  // std::map<std::string,std::string> line_map = shaw::File::ReadLine(filepath);
  // std::map<std::string,std::string>::iterator iter;
  // iter = line_map.begin();
  // while(iter != line_map.end()) {
  //   std::cout << iter->first << ":" << iter->second <<"."<< std::endl;
  //   iter++;
  // }
  // return 0;
  std::string in_file = "/data/shaw/pwd.sh";
  std::string out_file = "/data/shaw/pwd_copy.sh";
  std::vector<char> vec_file = shaw::File::ReadAllBytes(in_file);
  if (shaw::File::WriteBytes(vec_file, out_file)) {
  	std::cout<<"write bytes success."<<std::endl;
  } else {
  	std::cout<<"write bytes failed."<<std::endl;
  }
  // shaw::File::Delete(out_file);
}
