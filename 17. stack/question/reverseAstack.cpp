#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&s,int target){
    //bc
    if(s.empty()){
        s.push(target);
        return ;
    }
    //provessing
    int topElem = s.top();
    s.pop();
    //re
    insertatbottom(s,target);
    //bt
    s.push(topElem);
}
void reverseStack(stack<int>&s){
    //bc
    if(s.empty()){
        return;
    }

    //1 case solve
    int target = s.top();
    s.pop();

    //RE
    reverseStack(s);

    //insert at bottom
    insertatbottom(s,target);
  
}

int main(){
 stack<int>s;
 s.push(10);
 s.push(20);
 s.push(30);
 s.push(40);
reverseStack(s);
    
 while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
 }
 
return 0;
 }