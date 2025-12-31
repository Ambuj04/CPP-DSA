#include<bits/stdc++.h> //cotains all library
#include<iostream>
#include<array> //STL
using namespace std;
int main(){
    int basic[3]={2,3,4};//static array
    array<int,4>a={1,2,3,4};//stl array implement by static array
    int size = a.size();
    int byindex = a[3];
    int byIndex = a.at(3);
    bool emp = a.empty();
    int first = a.front();
    int last= a.back();
    
}