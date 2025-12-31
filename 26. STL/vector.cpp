// dynamic array
#include <iostream>
// purana vector bharne pe purana ka size double hoga new me purana ka content copy hoga .purana delele hoga
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int>a(5,1);
    vector<int>b(a);//a vector copy in b

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout << v.capacity() << endl; // 4
    cout << v.size() << endl;     // 3
    cout<<v[0];
    cout << v.front();
    cout << v.back();
    v.pop_back();
    cout << v.capacity() << endl; // 4
    cout << v.size() << endl;     // 2

    v.clear();
    cout << v.capacity() << endl; // 4
    cout << v.size() << endl;     // 0
    //iterator  .begin() .end()
}