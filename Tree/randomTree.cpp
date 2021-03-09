#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int value){
            data=value;
            left=right=NULL;
        }
};
void preOrder(Node *node){
    if(node==NULL)
        return;
    cout<<node->data<<"\t";
    preOrder(node->left);
    preOrder(node->right);
}
void postOrder(Node *node){
    if(node==NULL)
        return;
    postOrder(node->left);
    postOrder(node->right);
    cout<<node->data<<"\t";
}
void inOrder(Node *node){
    if(node==NULL)
        return;
    inOrder(node->left);
    cout<<node->data<<"\t";
    inOrder(node->right);
}
int main(){
    Node *root=new Node(1);
          root->left=new Node(12);
          root->right=new Node(9);
          root->left->left=new Node(5);
          root->left->right=new Node(6);
          cout<<"\nInorder Traversal of Tree"<<endl;
          inOrder(root);
          cout<<"\nPreorder Traversal of Tree"<<endl;
          preOrder(root);
          cout<<"\nPostorder Traversal of Tree"<<endl;
          postOrder(root);

}