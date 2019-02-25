#ifndef SHAW_STACK_H_
#define SHAW_STACK_H_
namespace shaw{
class Stack {
  public:
  	Stack(int size);
  	~Stack();
  	int Getsize();
  	int Pop();
  	bool Push(int element);
  	bool Empty();
  	bool Full();
  private:
  	int s_size;
  	int* p_stack;
  	int length;
};
} //namespace shaw
#endif