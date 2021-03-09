#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
};
Node* head=NULL;

/*Insertion*/
void insertLast(int value){
    Node* newNode=new Node();
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
    }
    else{
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
    }

}
void insertAtBeg(int value){
    Node* newNode=new Node();
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
}
void insertAfterPos(int pos,int value){
    Node* newNode=new Node();
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
    }
    else{
        int c=1;
        Node* temp=head;
        while(c!=pos){
            temp=temp->next;
            c++;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
}
void insertBeforePos(int pos,int value){
    Node* newNode=new Node();
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL){
        head=newNode;
    }
    else
    {
        int c=2;
        Node* temp=head;
        while(c!=pos){
            temp=temp->next;
            c++;
        }
        newNode->next=temp->next;
        temp->next=newNode;
    }
    
}

// Deletion 
void delAtBig(){
    if(head==NULL){
        cout<<"Deletion Not Possible";
    }
    else{
        head=head->next;
    }
}
void delAtLast(){
    if(head==NULL){
        cout<<"Deletion Not Possible";
    }
    else{
        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp->next=NULL;
    }
}
void delAtPos(int pos){
    if(head==NULL){
        cout<<"Deletion Not Possible";
    }
    else{
        int c=1;
        Node* temp=head;
        while(c<pos){
            temp=temp->next;
            c++;
        }
        temp->next=temp->next->next;
    }
}

// Searching
void search(int value){
    Node* temp=head;
    bool flag=true;
    while(temp!=NULL){
        if(value==temp->data){
            cout<<"Data Found\n";
            flag=false;
            break;
        }
        temp=temp->next;
    }
    if(flag)
        cout<<"Data Not Found\n";
}

// Sorting 
void sort(){
    Node* temp=head;
    int value;
    while(temp->next!=NULL){
        if(temp->data>temp->next->data){
            value=temp->next->data;
            temp->next->data=temp->data;
            temp->data=value;
        }
        temp=temp->next;
    }
}
// Finding Length 
    // iterative Approch
void countIterative(){
    Node* temp=head;
    int c=0;
    while(temp!=NULL){
        temp=temp->next;
        c++;
    }
    cout<<"Length of Linked List is:"<<c<<endl;
}
    // Recursive Approch 
int countRecursive(Node* root){
    if(root==NULL)  
        return 0;
    return 1+countRecursive(root->next);
}
// Printing
void print(){
    Node *temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}

int main(){
    insertLast(35);
    print();
    insertLast(45);
    print();
    insertAtBeg(25);
    print();
    insertAtBeg(15);
    print();
    insertAfterPos(2,33);
    print();
    insertBeforePos(4,40);
    print();
    countIterative();
    delAtLast();
    print();
    delAtBig();
    print();
    delAtPos(2);
    print();
    search(33);
    insertLast(15);
    countIterative();
    cout<<"Recusive Count:"<<countRecursive(head)<<endl;
    sort();
    print();
    return 0;
}
