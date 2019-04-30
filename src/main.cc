#include <iostream>
#include <string>
#include <set>
#include <vector>
#include "files.h"
#include "str.h"
#include "stack.h"
#include "boring.h"
#include "linkedlist.h"
#include "tree.h"
using namespace shaw;

int main(int argc,char* argv[]) {
  // Linkedlist<int> linkedlist;
  // Node<int>* n1 = linkedlist.addnode(1);
  // Node<int>* n2 = linkedlist.addnode(2);
  // Node<int>* n3 = linkedlist.addnode(3);
  // Node<int>* n4 = linkedlist.addnode(4);
  // n1->next = n2;
  // n2->next = n3;
  // n3->next = n4;
  // n4->next = nullptr;
  // Node<int>* head = n1;
  // while (head != nullptr) {
  // 	std::cout<<"head="<<head<<", value="<<head->value<<std::endl;
  // 	head = head->next;
  // }
  // Node<int>* new_head = linkedlist.deletenode(n1, 3);
  // std::cout<<"after delete"<<std::endl;
  // while (new_head != nullptr) {
  // 	std::cout<<"head="<<new_head<<", value="<<new_head->value<<std::endl;
  // 	new_head = new_head->next;
  // }
  Tree<int> tree;
  TreeNode<int>* t1 = tree.add_treenode(10);
  TreeNode<int>* t2 = tree.add_treenode(20);
  TreeNode<int>* t3 = tree.add_treenode(30);
  TreeNode<int>* t4 = tree.add_treenode(40);
  t1->left = t2;
  t1->right = t3;
  t2->left = t4;
  tree.print(t1);
  TreeNode<int>* newtree = tree.reverse(t1);
  std::cout<<"after reverse"<<std::endl;
  tree.print(newtree);
  return 0;
}
