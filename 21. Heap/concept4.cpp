#include<iostream>
#include<queue>
using namespace std;

int main(){
 priority_queue<int>pq; //max head
 pq.push(3);
 pq.push(6); 
 pq.push(5); 
 pq.push(8); 
 pq.push(1);
 cout<<pq.top(); //max element (8)
 pq.pop();//root or top is removed
 cout<<endl;
 cout<<pq.top(); //max element after 8 removal (6)
 cout<<endl;
 cout<<pq.size();//4

 priority_queue<int,vector<int>,greater<int>>pq1;//min head
  pq1.push(3);
 pq1.push(6); 
 pq1.push(5); 
 pq1.push(8); 
 pq1.push(1);
 cout<<endl;
 cout<<pq1.top();//1 is lowest 
 cout<<endl;
 pq1.pop();// 1 is removed
 cout<<pq1.top();//3 is lowest  after 1

 
return 0;
 }