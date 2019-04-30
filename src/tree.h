#ifndef SHAW_TREE_H_
#define SHAW_TREE_H_

namespace shaw {

template<typename T>
struct TreeNode
{
  TreeNode* left;
  TreeNode* right;
  T value;
};

template<class T>
class Tree {
  public:
    TreeNode<T>* add_treenode(T t);
    void print(TreeNode<T>* root);
    TreeNode<T>* reverse(TreeNode<T>* root);
    TreeNode<T>* insert(TreeNode<T>* insert_node);
};

template<class T>
TreeNode<T>* Tree<T>::add_treenode(T t) {
  TreeNode<T>* treenode = new TreeNode<T>;
  treenode->value = t;
  return treenode;
}

template<class T>
void Tree<T>::print(TreeNode<T>* root) {
  if (root != nullptr) {
  	std::cout<<"root="<<root<<", value="<<root->value<<", left="<<root->left<<", right="<<root->right<<std::endl;
  	print(root->right);
  	print(root->left);
  }
}

template<class T>
TreeNode<T>* Tree<T>::reverse(TreeNode<T>* root) {
  if (root == nullptr) {return root;}
  TreeNode<T>* tmp = root->left;
  root->left = root->right;
  root->right = tmp;
  reverse(root->left);
  reverse(root->right);
  return root;
}

// what the fucking code
template<class T>
TreeNode<T>* Tree::insert(TreeNode<T>* root, TreeNode<T>* insert_node) {
  if (root == nullptr) {return insert_node;}
  if (insert_node->value < root->value) {
  	insert_node->left = root;
  	return insert_node;
  }

}
} //namespace shaw
#endif //SHAW_TREE_H_