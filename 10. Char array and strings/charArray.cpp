#include<iostream>
#include<cstring> // for strlen
using namespace std;
 
int main(){
 //a char array is like a array of character 
 //a  char is stored in memory by their ascii value
 char ch[10];
 cin>>ch; // ambuj ch
 cout<<ch;//ambuj
//  because cin is end at space/enter/null character (\0) ascii 0 for null character
int size = sizeof(ch)/sizeof(char);
//char array contain null character in last index which shows the termination of the array
cout<<endl;

cout<<strlen(ch); // for character array




 
return 0;
 }