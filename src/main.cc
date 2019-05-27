#include <iostream>
#include <map>
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
  TreeNode<int>* t5 = tree.add_treenode(5);
  t1->left = t2;
  t1->right = t3;
  t3->left = t4;
  t3->right = t5;
  std::cout<<"pre print"<<std::endl;
  tree.pre_print(t1);
  std::cout<<"middle print"<<std::endl;
  tree.middle_print(t1);
  std::cout<<"after print"<<std::endl;
  tree.after_print(t1);
  std::cout<<"depth="<<tree.getdepth(t1)<<std::endl;
  return 0;
}
