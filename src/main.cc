#include <iostream>
#include <string>
#include <set>
#include <vector>
#include "files.h"
#include "str.h"
#include "stack.h"
#include "boring.h"
using namespace shaw;
using namespace std;

int main(int argc,char* argv[]) {
  /*code here*/
  int arr[] = {10,10,9,8,100,65,54,43,23,1,2,4,1};
  int length = sizeof(arr)/sizeof(arr[0]);
  // maxheapsort(arr,length);
  minheapsort(arr, length);
  return 0;
}
