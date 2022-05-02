/*DFS traversal techniques 
1)preorder(root,left,right)
2)inorder(left,root,right)
3)postorder(left,right,root)
*/

//preorder traversal(root,left,right)
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
//logic for preorder traversal
void preorder(Node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}
int main(){
    Node *root=new Node(1);                     
    root->left=new Node(2);                       
    root->right=new Node(3);                     
    root->left->left=new Node(4); 
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    preorder(root);
}
  /*      (1)
        /     \
      (2)     (3)
      / \     /
    (4) (5)  (6)    */
    
