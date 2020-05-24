#include <iostream>
using namespace std;

struct TreeNode {
	int data;
	TreeNode *left;
	TreeNode *right;
};

int treesum(TreeNode *root) {
    // base case: empty tree
    if (root == nullptr) return 0;

    // recursive case
    return treesum(root->left) + treesum(root->right) + root->data;
}

int main() {
    TreeNode fifty = {50, nullptr, nullptr};
    TreeNode twenty = {20, nullptr, nullptr};
    TreeNode thirty = {30, nullptr, nullptr};
    TreeNode ten = {10, nullptr, nullptr};
    TreeNode five = {5, nullptr, nullptr};

    fifty.left = &twenty;
    fifty.right = &thirty;
    thirty.left = &ten;
    thirty.right = &five;

    /*
    now we have the tree
            50
         20    30
             10  5
    */  

   // let's recursively sum all the nodes of this tree!
   cout << treesum(&fifty) << endl;     
}

