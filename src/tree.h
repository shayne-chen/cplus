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
    TreeNode<T>* insert(TreeNode<T>* root, TreeNode<T>* insert_node);
    TreeNode<T>* deletenode(TreeNode<T>* root, T delete_value);
    TreeNode<T>* find_lastleft(TreeNode<T>* root);
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
  	print(root->left);
  	print(root->right);
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


template<class T>
TreeNode<T>* Tree<T>::insert(TreeNode<T>* root, TreeNode<T>* insert_node) {
  if (root == nullptr) {return insert_node;}
  if (insert_node->value < root->value) {
  	if (root->left == nullptr) {
      root->left = insert_node;
      return root;
    } else {
      insert(root->left, insert_node);
    }
  } else if (insert_node->value > root->value) {
  	if (root->right == nullptr) {
  	  root->right = insert_node;
  	  return root;
  	} else {
  	  insert(root->right, insert_node);
  	}
  } else {
  	TreeNode<T>* tmp = root->left;
  	root->left = insert_node;
  	insert_node->left = tmp;
  	return root;
  }
}


template<class T>
TreeNode<T>* Tree<T>::deletenode(TreeNode<T>* root, T delete_value) {
  if (root == nullptr) {
  	return root;
  }
  if (delete_value < root->value) {
  	root->left = deletenode(root->left, delete_value);
  } else if (delete_value > root->value) {
  	root->right = deletenode(root->right, delete_value);
  } else {
    if (root->left == nullptr && root->right == nullptr) {
      delete root;
      root = nullptr;
    } else if (root->left != nullptr && root->right == nullptr) {
      root->left = root;
      delete root;
      root = nullptr;
      return root->left;
    } else if (root->right != nullptr && root->left == nullptr) {
      root->right = root;
      delete root;
      root = nullptr;
      return root->right;
    } else {
      TreeNode<T>* lastleft = find_lastleft(root->right);
      root->value = lastleft->value;
      root->right = deletenode(root->right, lastleft->value);
    }
  }
  return root;
}


template<class T>
TreeNode<T>* Tree<T>::find_lastleft(TreeNode<T>* root) {
  if (root == nullptr) {return root;}
  while (root != nullptr && root->left != nullptr) {
  	root = root->left;
  }
  return root;
}


} //namespace shaw
#endif //SHAW_TREE_H_