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
  string s1 = Str::reverse("123456789");
  cout<<s1<<endl;
  return 0;
}
