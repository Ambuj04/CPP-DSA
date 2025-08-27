#include<iostream>
#include<queue>
#include<deque>


using namespace std;

int main(){
 //creation 
 queue<int>q;
 //insertion
 q.push(5);
 q.push(6); 
 q.push(61); 
 q.push(65); 
 //size of queue
 cout<<q.size();
 q.pop();//5 is deleted
 cout<<endl;
 cout<<q.size();
 if(!q.empty()){cout<<"NOT empty";};
 cout<<q.front();//6
 



 deque<int>dq;
 dq.push_front(5);
 dq.push_back(15);
 dq.pop_front();
 dq.pop_back();
 cout<<dq.size();
 dq.push_front(5);
cout<<dq.front();
cout<<dq.back();
return 0;
 }