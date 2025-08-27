#include<iostream>
#include<queue>
using namespace std;
void interleave(queue<int>&q){
    //step 1 : separate two half
    int n = q.size();
    if(n == 0 || n == 1){ return ;}
    int k =  n /2;
    int count = 0;
    queue<int>aq;

    while(!q.empty()){
        int temp = q.front();
        q.pop();
        aq.push(temp);
        count++;
        if(count == k){
            break;
        }
    }
    //step 2 : interleave the queue
    while(!q.empty() && !aq.empty()){
        int first = aq.front();
        aq.pop();
        q.push(first);
        int second = q.front();
        q.pop();
        q.push(second);

    }
    if(n&1){ // n is odd
        int elem = q.front();
        q.pop();
        q.push(elem);

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
 q.push(7); 
 q.push(8); 
 q.push(9); 
interleave(q);
while (!q.empty())
{
    cout<<q.front()<<" ";
    q.pop();
}

 
return 0;
 }