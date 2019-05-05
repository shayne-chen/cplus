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
  Tree<int> tree;
  TreeNode<int>* t1 = tree.add_treenode(30);
  TreeNode<int>* t2 = tree.add_treenode(20);
  TreeNode<int>* t3 = tree.add_treenode(40);
  TreeNode<int>* t4 = tree.add_treenode(10);
  TreeNode<int>* t5 = tree.add_treenode(25);
  t1->left = t2;
  t1->right = t3;
  t2->left = t4;
  t2->right = t5;
  tree.print(t1);
  std::cout<<"after delete"<<std::endl;
  tree.deletenode(t1,40);
  tree.print(t1);
  return 0;
}
