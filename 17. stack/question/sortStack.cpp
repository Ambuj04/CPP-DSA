#include <iostream>
#include <stack>
using namespace std;
void insertSorted(stack<int> &s, int target)
{
    // bc
    if (!s.empty())
    {
        if (s.top() >= target)
        {
            s.push(target);
            return;
        }
    }else{
        //stck empty
        s.push(target);
        return;
    }
    //1 case solve
    int topElem = s.top();
    s.pop();
    //RE
    insertSorted(s,target);
    //bt
    s.push(topElem);
}
void sortStack(stack<int>&s){
 //bc 
 if(s.empty()){
    return;
 }
 //process
 int topElem = s.top();
 s.pop();
 sortStack(s);
 insertSorted(s,topElem);
}
int main()
{stack<int>s;
    s.push(3);
    s.push(5);
    s.push(1);
    s.push(9);
    s.push(2);
    sortStack(s);
    while(!s.empty())
{
    cout<<s.top()<<" ";
    s.pop();
}
    return 0;
}