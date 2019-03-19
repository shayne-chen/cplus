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
  int arr[] = {5,4,3,2,1,10,100,87,45,43,34,12,1};
  int length = sizeof(arr)/sizeof(arr[0]);
  quicksort(arr,0,length-1);
  for (int i=0;i<length;++i) {
  	cout<<arr[i]<<endl;
  }
  return 0;
}
