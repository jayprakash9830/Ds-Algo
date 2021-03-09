#include<bits/stdc++.h>
#define MAX 5
using namespace std;
int Stack[MAX];
int top=-1;
bool isEmpty(){
    if(top==-1)
        return true;
    return false;
}
bool isFull(){
    if(top==MAX-1)
        return true;
    return false;
}
void push(int val){
    if(isFull()){
        cout<<"Stack Full Can't Insert New Value"<<endl;
    }else{
        top++;
        Stack[top]=val;
    }
}
void pop(){
    if(isEmpty())
        cout<<"No any Data into stack"<<endl;
    else{
        top--;
    }
}
void Top(){
    if(isEmpty()){
        cout<<"No data found"<<endl;
    }
    else{
        cout<<Stack[top]<<endl;
    }
}
int main(){
    // push(61);
    // push(65);
    // push(66);
    // push(67);
    // push(68);
    // push(69);
    pop();  
    Top();
}