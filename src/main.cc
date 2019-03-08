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
  // set<char> s1;
  // s1.insert('a');
  // s1.insert('b');
  // cout<<s1.count('a')<<endl;
  // if (s1.count('a')) {
  // 	cout<<"false"<<endl;
  // } else {
  // 	cout<<"true"<<endl;
  // }
  return 0;
}
