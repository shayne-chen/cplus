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

Node<int>* gene_listnode1() {
  Node<int>* n1 = addnode<int>(3);
  Node<int>* n2 = addnode<int>(7);
  Node<int>* n3 = addnode<int>(10);
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

Node<int>* gene_listnode2() {
  Node<int>* n4 = addnode<int>(2);
  Node<int>* n5 = addnode<int>(8);
  Node<int>* n6 = addnode<int>(9);
  n4->next = n5;
  n5->next = n6;
  n6->next = nullptr;
  std::cout<<"n4="<<n4<<std::endl;
  std::cout<<"n4 next="<<n4->next<<std::endl;
  std::cout<<"n5="<<n5<<std::endl;
  std::cout<<"n5 next="<<n5->next<<std::endl;
  std::cout<<"n6="<<n6<<std::endl;
  std::cout<<"n6 next="<<n6->next<<std::endl;
  return n4;
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

Node<int>* insert(Node<int>* insert_node, Node<int>* head) {
  Node<int>* origin_head = head;
  int insert_value = insert_node->value;
  Node<int>* prev = nullptr;
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

Node<int>* deletenode(Node<int>* head, int value) {
  if (head->value == value) {
    return head->next;
  }
  Node<int>* prev = nullptr;
  Node<int>* origin_head = head;
  while (head != nullptr) {
    if (head->value != value) {
      prev = head;
      head = head->next;
    } else {
      prev->next = head->next;
      return origin_head;
    }
  }
  return origin_head;
}

int getlength(Node<int>* head) {
  int length = 0;
  while (head != nullptr) {
    length += 1;
    head = head->next;
  }
  return length;
}

Node<int>* merge(Node<int>* h1, Node<int>* h2) {
  if (h1 == nullptr) {
    return h2;
  }
  if (h2 == nullptr) {
    return h1;
  }
  Node<int>* merge_head = nullptr;
  if (h1->value < h2->value) {
    merge_head = h1;
    merge_head->next = merge(h1->next, h2);
  } else {
    merge_head = h2;
    merge_head->next = merge(h1, h2->next);
  }
  return merge_head;
}

//not complete
Node<int>* sort(Node<int>* head) {
  if (head == nullptr || head->next == nullptr) {return head;}
  Node<int>* new_head = nullptr;
  Node<int>* new_head_prev = nullptr;
  while (head != nullptr) {
    if (head->value < head->next->value) {
      new_head = head;
    } else {
      new_head = head->next;
    }
    head = head->next;
  }

}

int main(int argc, char const *argv[])
{
  Node<int>* head1 = gene_listnode1();
  std::cout<<std::endl;
  Node<int>* head2 = gene_listnode2();
  std::cout<<std::endl;
  Node<int>* new_head = merge(head1, head2);
  while (new_head != nullptr) {
    std::cout<<"current="<<new_head<<", value="<<new_head->value<<", next="<<new_head->next<<std::endl;
    new_head = new_head->next;
  }

  return 0;
}