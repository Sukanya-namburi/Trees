//postorder traversal(left,right,root)
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
//logic for postorder traversal
void postorder(Node *root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}
int main(){
    Node *root=new Node(1);                     
    root->left=new Node(2);                       
    root->right=new Node(3);                     
    root->left->left=new Node(4); 
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    postorder(root);
}
  /*      (1)
        /     \
      (2)     (3)
      / \     /
    (4) (5)  (6)    */
    
