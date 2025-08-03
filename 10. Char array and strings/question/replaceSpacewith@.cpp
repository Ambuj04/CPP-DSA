#include<iostream>
#include<string>
using namespace std;
//for char '  '
//for string " "

int main(){
 string s = "Ambuj is a good boy";


for (int i = 0; i < s.size(); i++)
{
    if(s[i]==' '){
        s[i]='@';
    }

}
cout<<s;

 
return 0;
 }