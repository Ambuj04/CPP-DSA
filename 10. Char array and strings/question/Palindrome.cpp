//check palindrome or not
#include<iostream>
#include<string>
using namespace std;

int main(){
 string str = "racecar"; 
 int left = 0;
 int right = str.size()-1;
 bool palindrome = false;
 while(left<right){
    if(str[left] == str[right]){
        palindrome = true;
    }
    left++;
    right--;
 }
 cout<<palindrome;
 
return 0;
 }