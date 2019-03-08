#include <iostream>
#include <string>
#include <set>
#include <vector>
#include "files.h"
#include "str.h"
#include "stack.h"
using namespace shaw;
using namespace std;

int main(int argc,char* argv[]) {
  const string s1 = "abcdae";
  const string s2 = "aadcbaaaaabcdd";
  if (Str::Sameletter(s1,s2)) {
  	cout<<"true"<<endl;
  } else {
  	cout<<"false"<<endl;
  }
  return 0;
}
