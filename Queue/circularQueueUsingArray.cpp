#include<bits/stdc++.h>
#define MAX 5
using namespace std;
int Queue[MAX];
int front=-1,rear=-1;

bool isFull(){
    if(front==0 && rear==MAX-1)
        return true;
    if(front==rear+1)
        return true;
    return false;
}
bool isEmpty(){
    if(front==-1 && rear==-1)
        return true;
    return false;
}
void enQueue(int value){
    if(isFull()){
       cout<<"Queue Full"<<endl;
    }else{
        if(front==-1)
            front=0;
        rear=(rear+1)%MAX;
        Queue[rear]=value;
        cout<<value<<" Inserted at"<<rear<<endl;
    }
}
void deQueue(){
    if(isEmpty())
        cout<<"Queue Empty"<<endl;
    else{
        if(front==rear){
            front=-1;
            rear=-1;
        }
        else{
            front=(front+1)%MAX;
        }
    }
}
int main(){
    enQueue(5);
    enQueue(5);
    enQueue(5);
    enQueue(5);
    enQueue(5);
    deQueue();
    enQueue(5);
    enQueue(5);
    deQueue();
}