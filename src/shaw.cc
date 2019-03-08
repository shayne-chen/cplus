#include <iostream>
#include "shaw.h"
using namespace std;
class Single {
  private:
    Single(){}
    static Single* p;
  public:
    static Single* getinstance() {
      if (p==NULL) {
      	p = new Single();
      }
      return p;
    }
};
Single* Single::p = NULL;

int main(int argc, char const *argv[])
{
	Single* p1 = Single::getinstance();
	Single* p2 = Single::getinstance();
	cout<<p1<<endl;
	cout<<p2<<endl;
}