#include<bits/stdc++.h>
using namespace std;
stack<int> s1;
stack<int> s2;
void enQueue(int val){
    s1.push(val);
}
void deQueue(){
    if(s1.empty()){
        cout<<"Queue Empty"<<endl;
    }else{

    
    while(!s1.empty())
    {
        s2.push(s1.top());
        s1.pop();
    }
    cout<<s2.top()<<" Deleted"<<endl;
    s2.pop();
    while(!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
    }
}
void peep(){
    cout<<s1.top();
}
int main(){
    enQueue(5);
    enQueue(6);
    deQueue();
    deQueue();
    deQueue();

}
