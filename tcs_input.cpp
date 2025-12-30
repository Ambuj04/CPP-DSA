// 1 2 3 4 5 
// Online C++ compiler to run C++ program online
#include <iostream>
#include<sstream>
#include<vector>
using namespace std;
int main() {
   string s;
   vector<int>arr;
   getline(cin,s);
   stringstream ss(s);
   int n;
   while(ss>>n){
       arr.push_back(n);
   }
   for(int i = 0;i<arr.size();i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}
//1,2,3,4,5
// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    string s;
    vector<int>arr;
    int n=0;
    getline(cin,s);
   for(char c:s){
       if(c==','){
           arr.push_back(n);
           n = 0;
       }else{
           //string to number then n equal to number
           n = n * 10 + (c - '0');
       }
   }
   arr.push_back(n);
    for(int i = 0;i<arr.size();i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}
//{1,2,3,4,50}
// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    string s;
    vector<int>arr;
    int n=0;
    getline(cin,s);
 s = s.substr(1,s.length()-2);
   for(char c:s){
       if(c==','){
           arr.push_back(n);
           n = 0;
       }else{
           //string to number then n equal to number
           n = n * 10 + (c - '0');
       }
   }
   arr.push_back(n);
    for(int i = 0;i<arr.size();i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}
//string with spaces
#include <iostream>
#include<string>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    cout<<s;
    return 0;
}
//number then string
// 1
// Ambuj chaurasia
// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;
int main() {
    string s;
    int n;
    cin>>n;
    cin.ignore();
    getline(cin,s);
    cout<<n<<" "<<s;
    return 0;
}
