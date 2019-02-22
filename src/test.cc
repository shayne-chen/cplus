#include <iostream>
#include <string>
#include <vector>
#include "file.h"
#include "str.h"

int main(int argc,char* argv[]) {
  if (argc<2) {
    std::cout<<"Usage: "<<argv[0]<<" input_file out_file"<<std::endl;
    return -1;
  }
  std::string in_file = std::string(argv[1]);
  std::string out_file = std::string(argv[2]);
  std::vector<char> vec_file = shaw::File::ReadAllBytes(in_file);
  if (shaw::File::WriteBytes(vec_file, out_file)) {
  	std::cout<<"write bytes success."<<std::endl;
  } else {
  	std::cout<<"write bytes failed."<<std::endl;
  }
  return 0;
}
