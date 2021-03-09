#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
};
Node *head=NULL;

// Insertion Operation 
void insertAtBeg(int val){
    Node *newNode=new Node();
    newNode->data=val;
    newNode->next=head;
    if (head!= NULL) {
        Node *ptr=head;
      while (ptr->next != head)
      ptr = ptr->next;
      ptr->next = newNode;
   } else
   newNode->next = newNode;
   head = newNode;
}

void insertAtLast(int val){
    Node *newNode=new Node();
    newNode->data=val;
    newNode->next=head;
    if(head!=NULL){
        Node *temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=newNode;
    }else{
        newNode->next=newNode;
    }
}

void insertBeforePos(int pos,int val){
    Node *newNode=new Node();
    newNode->data=val;
    newNode->next=head;
    if(head!=NULL){
        Node *temp=head;
        int c=2;
        while(c!=pos){
            temp=temp->next;
            c++;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }else{
        head=newNode;
    }
}

void insertAfterPos(int pos,int val){
    Node *newNode=new Node();
    newNode->data=val;
    newNode->next=head;
    if(head!=NULL){
        Node *temp=head;
        int c=0;
        while (c!=pos)
        {
            temp=temp->next;
            c++;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }else{
        head=newNode;
    }
}
// Delition 

void deleteAtBeg(){
    if(head==NULL){
        cout<<"No data Found"<<endl;
    }
    else{
        Node *temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        temp->next=head->next;
        head=head->next;
    }
}

void deleteAtLast(){
    if(head==NULL){
        cout<<"No data Found"<<endl;
    }else{
        Node *temp=head;
        while(temp->next->next!=head){
            temp=temp->next;
        }
        temp->next=head;
    }
}

void delAtPos(int pos){
    if(head==NULL){
        cout<<"No Data Found"<<endl;
    }else{
        Node *temp=head;
        int c=1;
        while(c!=pos){
            c++;
            temp=temp->next;
        }
        temp->next=temp->next->next;
    }
}
// Printing 
void print(){
    Node *temp=head;
   do{
       cout<<temp->data<<"\t";
       temp=temp->next;
   }while(temp!=head);
    cout<<endl;
}

void sort(){
    Node* temp=head;
    int value;
    while(temp->next!=head){
        if(temp->data>temp->next->data){
            value=temp->next->data;
            temp->next->data=temp->data;
            temp->data=value;
        }
        temp=temp->next;
    }
}
int main()
{
    insertAtBeg(15);
    print();
    insertAtBeg(20);
    print();
    insertAfterPos(1,30);
    print();
    insertAtBeg(25);
    print();
    insertAtLast(45);
    print();
    insertBeforePos(2,50);
    print();
    deleteAtBeg();
    print();
    deleteAtLast();
    print();
    delAtPos(2);
    print();
    return 0;
}
