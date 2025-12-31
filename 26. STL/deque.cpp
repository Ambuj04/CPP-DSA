//insert and removal by both side
//(non contigious , not like vector array)
//dynamic
//random access possible by at
#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_front(0);
    for(int i:d){
        cout<<i<<" ";
    }
    d.pop_back();
    d.pop_front();
    d.push_back(1);
    d.push_back(2);
    cout<<d.front();//first index element
    cout<<d.back();//last index element
    cout<<d.at(0);//1
    cout<<d.empty();
    d.erase(d.begin(),d.begin()+1);//delete 1st element
    cout<<d.size();//element inside data structure
    cout<<d.max_size();//like capacity
}