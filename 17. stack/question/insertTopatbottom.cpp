#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int>&s,int target){
    //bc
    if(s.empty()){
        s.push(target);
        return ;
    }
    //provessing
    int topElem = s.top();
    s.pop();
    //re
    solve(s,target);
    //bt
    s.push(topElem);
}

int main(){
 stack<int>s;
 s.push(10);
 s.push(20);
 s.push(30);
 s.push(40);
 if(s.empty()){
        cout<<"stack is empty";
return 0;

     }
 int target = s.top();
     s.pop();
     solve(s,target);
     
    
 while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
 }
 
return 0;
 }