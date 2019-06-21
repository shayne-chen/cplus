#ifndef SHAW_DOUBLELINKED_H_
#define SHAW_DOUBLELINKED_H_

namespace shaw {

template<typename T>
struct Node {
  Node* prev;
  Node* next;
  T value;
};

template<class T>
class DoubleLinked {
  public:
    Node<T>* addnode(T t);
    Node<T>* insert(Node<T>* insert_node, Node<T>* head);
    Node<T>* deletenode(Node<T>* head, T t);
};

template<class T>
Node<T>* DoubleLinked<T>::addnode(T t) {
  Node<T>* node = new Node<T>;
  node->value = t;
  return node;
}

template<class T>
Node<T>* DoubleLinked<T>::insert(Node<T>* insert_node, Node<T>* head) {
  if (insert_node->value <= head->value) {
  	insert_node->next = head;
    head->prev = insert_node;
    return insert_node;
  } else {
  	Node<T>* origin = head;
  	while (head->value < insert_node->value) {
  	  head = head->next;
  	}
  	Node<T>* old_prev = head->prev;
  	old_prev->next = insert_node;
  	insert_node->next = head;
  	insert_node->prev = old_prev;
  	head->prev = insert_node;
  	return origin;
  }
}

template<class T>
Node<T>* Doublelinked<T>::deletenode(Node<T>* head, T t) {
  if (head->value == t) {
  	head->next->prev = nullptr;
  	Node<T>* new_head = head->next;
  	delete head;
  	return new_head;
  }
  while (head->value != t) {
  	head = head->next;
  }
  head->prev->next = head->next;
  head->next-prev = head->prev;
}
}

#endif