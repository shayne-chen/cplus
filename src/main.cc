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
  int arr1[] = {10,9,8,100,100,99,12,23,34,2};
  int length1 = sizeof(arr1)/sizeof(arr1[0]);
  int arr2[] = {5,6,4,2,9};
  int length2 = sizeof(arr2)/sizeof(arr2[0]);
  int length = length1+length2;
  int* p = mergetwoarray(arr1,length1,arr2,length2);
  for (int a=0;a<length;++a) {
    cout<<*(p+a)<<endl;
  }
  return 0;
}
