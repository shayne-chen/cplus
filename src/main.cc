#include <iostream>
#include <string>
#include <vector>
#include "files.h"
#include "str.h"
#include "stack.h"
using namespace shaw;
using namespace std;
int main(int argc,char* argv[]) {
  // if (argc<2) {
  //   std::cout<<"Usage: "<<argv[0]<<" input_file out_file"<<std::endl;
  //   return -1;
  // }
  // std::string in_file = std::string(argv[1]);
  // std::string out_file = std::string(argv[2]);
  // std::vector<char> vec_file = shaw::File::ReadAllBytes(in_file);
  // if (shaw::File::WriteBytes(vec_file, out_file)) {
  // 	std::cout<<"write bytes success."<<std::endl;
  // } else {
  // 	std::cout<<"write bytes failed."<<std::endl;
  // }

  Stack* st = new Stack(3);
  st->Push(1);
  st->Push(2);
  st->Push(345);
  cout<<"size is : "<<st->Getsize()<<endl;
  cout<<"pop is : "<<st->Pop()<<endl;
  cout<<"size is : "<<st->Getsize()<<endl;
  delete st;
  st = nullptr;
  return 0;
}
