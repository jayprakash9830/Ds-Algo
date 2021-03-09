#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *prev;
        Node *next;
};
Node *head=NULL;
// Insertion 

void insertAtBeg(int val){
    Node *newNode=new Node();
    newNode->data=val;
    newNode->prev=NULL;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
    }
    else{
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
    }
}

void insertAtLast(int val){
    Node *newNode=new Node();
    newNode->data=val;
    newNode->next=NULL;
    newNode->prev=NULL;
    if(head==NULL){
        head=newNode;
    }else{
        Node *temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        newNode->prev=temp;
    }
}

void insertAtPosBefore(int pos,int val){
    Node *newNode=new Node();
    newNode->data=val;
    newNode->next=NULL;
    newNode->prev=NULL;
    if(pos==0 || pos==1){
        insertAtBeg(val);
    }
    else if(head==NULL){
        head=newNode;
    }else{
        Node *temp=head;
        int c=2;
        while(c!=pos){
            c++;
            temp=temp->next;
        }
        newNode->next=temp->next;
        newNode->prev=temp;
        temp->next->prev=newNode; 
        temp->next=newNode;    
    }
}

void insertAfterPosition(int pos,int value){
    Node *newNode=new Node();
    newNode->data=value;
    newNode->prev=NULL;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
    }else{
        Node *temp=head;
        int c=0;
        while(c!=pos){
            c++;
            temp=temp->next;
        }
        newNode->next=temp->next;
        newNode->prev=temp;
        temp->next->prev=newNode;
        temp->next=newNode;
    }
}
void deleteBeg(){
    cout<<endl;
    if(head==NULL){
        cout<<"No data Found in List";
    }else{
        head=head->next;
        head->prev=NULL;
    }
}

void deleteAtLast(){
    cout<<endl;
    if(head==NULL){
        cout<<"No data Found in List";
    }else{
        Node *temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
    }
}

int findlength(){
    Node *temp=head;
    int c=0;
    while(temp!=NULL){
        c++;
        temp=temp->next;
    }
    return c;
}

void print(){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}

void reverseprint(int pos){
    Node *temp=head;
    int c=0;
    while(c!=pos){
        c++;
        temp=temp->next;
    }
    cout<<"Reverse Print\t";
    int len=findlength();
    while(temp!=NULL){
        if(c>=len){
            cout<<"Given Position More than Linked list length";
            break;
        }
        cout<<temp->data<<"\t";
        temp=temp->prev;
    }
}
int main(){
    insertAtBeg(10);
    print();
    insertAtBeg(5);
    print();
    insertAtBeg(1);
    print();
    insertAtLast(15);
    print();
    insertAtPosBefore(0,20);
    print();
    insertAfterPosition(1,25);
    print();
    reverseprint(5);
    deleteBeg();
    print();
    deleteAtLast();
    print();
    return 0;
}