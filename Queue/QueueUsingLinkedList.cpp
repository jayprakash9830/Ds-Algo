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
    newNode->next=NULL;
    if(isEmpty()){
        rear=newNode;
        front=newNode;
    }
    else{
        rear->next=newNode;
        rear=newNode;
    }
}
void deQueue(){
    if(isEmpty() || front->next==NULL){
        cout<<"No Data Found"<<endl;
    }else{
        front=front->next;
    }
} 


int peek(){
    if(isEmpty())
    {
        cout<<"Empty Queue"<<endl;
        return 0;
    }
    return front->data;
}

int main(){
    enQueue(5);
    enQueue(6);
    enQueue(7);
    deQueue();
    int data=peek();
    if(data!=0){
        cout<<data;
    }
}