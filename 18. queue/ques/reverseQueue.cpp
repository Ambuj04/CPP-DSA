#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseQueue(queue<int>&q){
    stack<int>s;
    //queue to stack
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    //stack to queue
    while(!s.empty()){
        int element = s.top();
        s.pop();
        q.push(element);
    }
}
void reverse(queue<int>&q){
    if(q.empty()){
        return ;
        
    }
    int element = q.front();
    q.pop();
    reverse(q);
    q.push(element);
}

int main(){
 queue<int>q;
 q.push(1);
 q.push(2); 
 q.push(3); 
 q.push(4); 
 q.push(5); 
 q.push(6); 

//  reverseQueue(q);
 reverse(q);
 while(!q.empty()){
    cout<<q.front()<<"  ";
    q.pop();
 }
  
 
return 0;
 }