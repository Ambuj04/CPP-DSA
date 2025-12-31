//data store in key value form
//value can be pointed by more than one key
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>map;
    map[0]="ambuj";
    map[1]="chaurasia";
    for(auto i:map){
        cout<<i.first<<" "<<i.second;
        cout<<endl;
    }
    map.insert({2,"chaurasiya"}); // O(log n) for sorted  by balanced tree
    cout<<map.count(2);//1 means present 0 means not
    cout<<map.count(20);//0
    map.erase(2);// 2 chaurasiya is removed
      for(auto i:map){
        cout<<i.first<<" "<<i.second;
        cout<<endl;
    }
    auto it = map.find(1);
    cout<<(*it).second;//chaurasia
   
}