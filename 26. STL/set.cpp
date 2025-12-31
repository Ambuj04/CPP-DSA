//unique element by BST
// no modify
//sorted ordered
//unordered set is fast by unsorted
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(5);  // O(logn)
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(1);
    s.insert(2);

    for(int i:s){
        cout<<i<<" ";
    }
    s.erase(s.begin());//delete 1st element
cout<<s.count(5);//1 means 5 present hai 0 means nhi
cout<<endl;
//return iterator
set<int>::iterator itr = s.find(2);
cout<<*itr;//give value which file * is dereference operator

}