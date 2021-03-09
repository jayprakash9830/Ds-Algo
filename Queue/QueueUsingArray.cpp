#include<bits/stdc++.h>
#define MAX 5
using namespace std;
int Queue[MAX];
int front=-1,rear=-1;
void insert(int value){
    if(front==MAX-1){
        cout<<"Overflow";
    }else if(front==-1 && rear==-1){
        front=0;
        rear=0;
        Queue[rear]=value;
    }else {
        rear++;
        Queue[rear]=value;
    }
}
void del(){
    if(rear==-1 || front==MAX-1){
        cout<<
    }
}
int main(){

}