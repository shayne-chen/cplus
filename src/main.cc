#include <iostream>
#include <string>
#include <set>
#include <vector>
#include "files.h"
#include "str.h"
#include "stack.h"
#include "boring.h"
#include "linkedlist.h"
using namespace shaw;

int main(int argc,char* argv[]) {
  Linkedlist<int> linklist(10);
  // linklist.addnode(10);
  std::cout<<linklist.addnode(10)<<", value="<<linklist.addnode(10)->value<<std::endl;
  return 0;
}
