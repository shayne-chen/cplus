#include <iostream>
#include <string>
#include <vector>
#include "files.h"
#include "str.h"
#include "stack.h"
using namespace shaw;
int main(int argc,char* argv[]) {
  // exercise main code here.
  int s1 = 123;
  int s2 = 456;
  int* p = Str::Concat(s1,s2);
  if (p==nullptr) {std::cout<<"nullptr"<<std::endl;}
  std::cout<<p<<std::endl;
  std::cout<<*p<<std::endl;
  // std::cout<<*(Str::Concat(s1,s2))<<std::endl;
  return 0;
}
