#include<iostream>

using namespace std;
 
int main(){
 string arr;
// getline(cin,arr); //ambuj chaurasia
// cout<<arr; //ambuj chaurasia
//because getline(cin,string_name,delimiter) here delimeter means where you want to end the string default is null character \0
// getline(cin,arr,',');//ambuj,chaurasia
// cout<<arr;//ambuj
 //string has many inbuit fucntions

 //for length of a string
 int i = 0;
getline(cin,arr);
 while(arr[i] != '\0'){
     cout<<arr[i]<<" ";
    i++;
 }
 cout<<i;
 cout << arr.length(); //inbuilt func for length
 cout<<arr.size();//length
 cout<<arr.empty() ;// chech string empty or not
 arr.append("chaurasia"); // put chaurasia in last of the string
 cout<<arr;
 int substring = arr.substr(1,6);// start from index 1 and get 6 letters
 int pos = arr.find("ch");//return index of first occurance or npos (no position)
 int lastpos = arr.rfind("ch");//retrun last occurance index
 int newstr = arr.erase("1","6",);
 int newinsert = newstr.insert("holla",5);// string,position
 newinsert.replace(6,5,"jubma"); //positon,length,string
 if(arr.compare("ambuj" == 0)){
    //compare two strings
}
 const char* cstr= arr.c_str(); // string to character array
    
 
return 0;
 }