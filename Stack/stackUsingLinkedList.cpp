#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *link;
};
Node *top=NULL;
void push(int value){
    Node *newNode=new Node();
    newNode->data=value;
    newNode->link=NULL;
    if(top==NULL){
        top=newNode;
    }else{
        newNode->link=top;
        top=newNode;
    }
}
void pop(){
    if(top==NULL){
        cout<<"Empty Stack"<<endl;
    }else{
        top=top->link;
    }
}
void peep(){
    if(top==NULL){
        cout<<"Empty Stack"<<endl;
    }else{
        cout<<top->data<<endl;
    }
}
int main(){
    push(5);
    push(6);
    push(7);
    pop();
    pop();
    pop();
    pop();
    peep();
}