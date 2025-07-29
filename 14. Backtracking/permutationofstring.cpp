#include<iostream>
using namespace std;

void printpermutation(string &str,int i){
    //base case
    if(i>= str.length()){
        cout<<str<<" ";
        return;
    }
    //swappint 1 case bs hum dekhenge
    for(int j = i;j<str.length();j++){
        //swap
        swap(str[i],str[j]);
        //recursion call
        printpermutation(str,i+1);

        //backtracking
        swap(str[i],str[j]);
    }

}
 
int main(){
 string str = "abc";
 int i = 0;
 printpermutation(str,i);
 return 0; 
 

 }