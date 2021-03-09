#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
Node *front=NULL;
Node *rear=NULL;

bool isEmpty(){
    if(front==NULL && rear==NULL)
        return true;
    return false;
}
void enQueue(int value){
    Node *newNode=new Node();
    newNode->data=value;
    newNode->next=newNode;
    if(isEmpty()){
        front=newNode;
        rear=newNode;
    }else{
        rear->next=newNode;
        rear=newNode;
        rear->next=front;
    }
}
void deQueue(){
    if(front==NULL){
        cout<<"Queueu Empty"<<endl;
    }else{
        if(front==rear){
            free(front);
            front=NULL;
            rear=NULL;
        }else{
            Node *temp=front;
            front=front->next;
            rear->next=front;
            free(temp);
        }
    }
}
void show(){
    Node *temp=front;
    cout<<temp->data<<"\t";
    temp=temp->next;
    while(temp!=front){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
}

int peek(){
    if(isEmpty()){
        return 0;
    }else{
        return front->data;
    }
}

int main(){
    enQueue(5);
    enQueue(6);
    if(peek()){
        cout<<peek()<<endl;
    }
    enQueue(7);
    show();
    deQueue();
    if(peek()){
        cout<<endl<<peek()<<endl;
    }
    show();
    deQueue();
}