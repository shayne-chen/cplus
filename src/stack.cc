#include <iostream>
#include "stack.h"

namespace shaw{
Stack::Stack(int size) {
  s_size = size;
  p_stack = new int[size];
  length = 0;
}

Stack::~Stack() {
  delete[] p_stack;
}

int Stack::Getsize() {
  return length;
}

bool Stack::Full() {
  return s_size == length;
}

bool Stack::Empty() {
  return length == 0;
}

bool Stack::Push(int element) {
  if (Full()) {
  	std::cout<<"stack is full"<<std::endl;
  	return false;
  }
  p_stack[length] = element;
  length += 1;
  return true;
}

int Stack::Pop() {
  if (Empty()) {
  	return -1;
  }
  int pop_ele = p_stack[length-1];
  length--;
  return pop_ele;
}
} //namespace shaw