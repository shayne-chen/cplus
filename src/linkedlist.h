#ifndef SHAW_LINKEDLIST_H_
#define SHAW_LINKEDLIST_H_
#include <iostream>

namespace shaw {

template<typename T>
struct Node {
    Node* next;
    T value;
};

template<class T>
class Linkedlist {
public:
  Node<T>* addnode(T t);
  void printlist(Node<T>* head);
  Node<T>* reverse(Node<T>* head);
  Node<T>* deletenode(Node<T>* head, T value);
  int getlength(Node<T>* head);
  Node<T>* merge(Node<T>* h1, Node<T>* h2);
  Node<T>* insert(Node<T>* insert_node, Node<T>* head);
  Node<T>* sort(Node<T>* head);
};

template<class T>
Node<T>* Linkedlist<T>::addnode(T t) {
  Node<T>* node = new Node<T>;
  node->value = t;
  return node;
}

template<class T>
void Linkedlist<T>::printlist(Node<T>* head) {
  while (head != nullptr) {
    std::cout<<"node="<<head<<", value="<<head->value<<", next node="<<head->next<<std::endl;
    head = head->next;
  }
}

template<class T>
Node<T>* Linkedlist<T>::reverse(Node<T>* head) {
  Node<T>* prev = nullptr;
  while (head != nullptr) {
  	Node<T>* tmp = head->next;
    head->next = prev;
    prev = head;
    head = tmp;
  }
  return prev;
}

template<class T>
Node<T>* Linkedlist<T>::deletenode(Node<T>* head, T value) {
  if (head->value == value) {
    return head->next;
  }
  Node<T>* prev = nullptr;
  Node<T>* origin_head = head;
  while (head != nullptr) {
    if (head->value != value) {
      prev = head;
      head = head->next;
    } else {
      prev->next = head->next;
      delete head;
      head = nullptr;
      return origin_head;
    }
  }
  return origin_head;
}

template<class T>
int Linkedlist<T>::getlength(Node<T>* head) {
  int length = 0;
  while (head != nullptr) {
    length += 1;
    head = head->next;
  }
  return length;
}

template<class T>
Node<T>* Linkedlist<T>::merge(Node<T>* h1, Node<T>* h2) {
  if (h1 == nullptr) {
    return h2;
  }
  if (h2 == nullptr) {
    return h1;
  }
  Node<T>* merge_head = nullptr;
  if (h1->value < h2->value) {
    merge_head = h1;
    merge_head->next = merge(h1->next, h2);
  } else {
    merge_head = h2;
    merge_head->next = merge(h1, h2->next);
  }
  return merge_head;
}

template<class T>
Node<T>* Linkedlist<T>::insert(Node<T>* insert_node, Node<T>* head) {
  Node<T>* origin_head = head;
  T insert_value = insert_node->value;
  Node<T>* prev = nullptr;
  if (insert_node->value <= head->value) {
      insert_node->next = head;
      return insert_node;
  }
  while (head != nullptr) {
    if (head->value <= insert_value) {
      prev = head;
      head = head->next;
    } else {
      prev->next = insert_node;
      insert_node->next = head;
      return origin_head;
    }
  }
  prev->next = insert_node;
  return origin_head;
}

// what the fucking code
template<class T>
Node<T>* Linkedlist<T>::sort(Node<T>* head) {
  if (head == nullptr || head->next == nullptr) {return head;}
  Node<T>* prev = nullptr;
  Node<T>* new_head = nullptr;
  Node<T>* origin_head = head;
  while (head->next != nullptr) {
    if (head->value > head->next->value) {
      new_head = head->next;
      prev = head;
    } else {
      new_head = head;
    }
    head = head->next;
  }
  prev->next = new_head->next;
  new_head->next = origin_head;
  if (new_head->next->next != nullptr) {
    sort(new_head->next);
  }
  return new_head;
}

} //namespace shaw
#endif //SHAW_LINKEDLIST_H_