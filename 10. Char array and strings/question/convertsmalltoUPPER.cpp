#include<iostream>
#include<string>
using namespace std;

int main(){
 string str = "ambuj";
 for(int i = 0;i<str.size();i++){
    str[i] = str[i] - 'a' + 'A';
    // -'A'+'a' for upper to small
 } 
 for(char ch:str){
    cout<<ch;
 }
 
return 0;
 }