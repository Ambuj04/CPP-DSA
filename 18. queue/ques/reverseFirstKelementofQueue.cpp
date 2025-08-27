#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverseK(queue<int>&q){
    int n = q.size();
    int k = 0;
    if(k>n){
        return;
    }
    stack<int>s;
    int count = 0;
    while(!q.empty()){
        if(count == k) break;
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;
    }
    while(!s.empty()){
        int temp = s.top();
        s.pop();
        q.push(temp);
    }
    count = 0;
    while(!q.empty()  ){
         if(count == n-k){
            break;;
        }
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;
       
    }
}

int main(){
 queue<int>q;
 q.push(1);
 q.push(2); 
 q.push(3); 
 q.push(4); 
 q.push(5); 
 q.push(6); 


reverseK(q);
 while(!q.empty()){
    cout<<q.front()<<"  ";
    q.pop();
 }
  
 
return 0;
 }