#include <iostream>

template<typename T1>
struct Node
{
  Node* next;
  T1 value;
};

template<typename T2>
Node<T2>* addnode(T2 t2) {
  Node<T2>* node = new Node<T2>;
  node->value = t2;
  return node;
}

Node<int>* gene_listnode() {
  Node<int>* n1 = addnode<int>(1);
  Node<int>* n2 = addnode<int>(2);
  Node<int>* n3 = addnode<int>(3);
  n1->next = n2;
  n2->next = n3;
  n3->next = nullptr;
  std::cout<<"n1="<<n1<<std::endl;
  std::cout<<"n1 next="<<n1->next<<std::endl;
  std::cout<<"n2="<<n2<<std::endl;
  std::cout<<"n2 next="<<n2->next<<std::endl;
  std::cout<<"n3="<<n3<<std::endl;
  std::cout<<"n3 next="<<n3->next<<std::endl;
  return n1;
}

Node<int>* reverse(Node<int>* head) {
  Node<int>* prev = nullptr;
  while (head != nullptr) {
  	Node<int>* tmp = head->next;
    head->next = prev;
    prev = head;
    head = tmp;
  }
  return prev;
}

int main(int argc, char const *argv[])
{
  Node<int>* head = gene_listnode();
  std::cout<<std::endl;
  Node<int>* new_head = reverse(head);
  while (new_head != nullptr) {
  	std::cout<<"current="<<new_head<<std::endl;
  	std::cout<<"next="<<new_head->next<<std::endl;
  	new_head = new_head->next;
  }
  return 0;
}