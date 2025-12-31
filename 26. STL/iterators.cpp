//iterators is like pointer for containers
// it++ work for continuous containers like array vector 
// .begin() point to zero index
// .end() point next to last index
// container_name<datatype>::iterator it= .begin()
// (*it).first = (it->first)
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,6,7};
    vector<int>::iterator it=v.begin();
    //it pointer points to 0th index
    cout<<(*it); //1 at 0th index
    it++;//work because continuous containers
    cout<<(*it);//2 at 1th index

    //it+1  wrong  go to next location
    // it++ means go to next iterator

    //for traversal conti and non conti
    cout<<endl;
    for( it = v.begin(); it != v.end(); ++it){
        cout<<(*it)<<" ";

    }
    vector<pair<int,int>>v_p = {{1,2},{3,4}};
    vector<pair<int,int>>::iterator itr; // 
    cout<<endl;
    for( itr = v_p.begin();itr!=v_p.end();++itr){
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
        cout<<(itr->first)<<" "<<(itr->second)<<endl;
    }

    //auto keyword
    vector<pair<int,int>>vectorPair = {{100,2},{300,4}};
      for(auto it=vectorPair.begin();it!=vectorPair.end();++it){
         cout<<(it->first)<<" "<<(it->second)<<endl;
      }




      //best of all among
      for(auto x:vectorPair){
        cout<<x.first<<" "<<x.second<<endl;
      }
    

}