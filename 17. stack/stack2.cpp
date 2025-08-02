// 2 stack in an array
#include <iostream>

using namespace std;
class Stack
{
    public:
    int *arr;
    int size;
    int top1;
    int top2;
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }
    void push1(int elem)
    {
        if (top2 - top1 == 1)
        {
            // no space
            cout << "stack overflow";
        }
        else
        {
            top1++;
            arr[top1] = elem;
        }
    }
    void push2(int elem)
    {
        if (top2 - top1 == 1)
        {
            // no space
            cout << "stack overflow";
        }
        else
        {
            top2--;
            arr[top2] = elem;
        }
    }
    void pop1(){
        if(top1<0){
            cout<<"stack underflow";
        }else{
            arr[top1] = 0;
            top1--;
            
        }
    }
    void pop2(){
        if(top2==size){
                cout<<"stack underflow";
        }else{
            arr[top2] = 0;

            top2++;

        }
    }
    //print for check only
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
 int main()
{
Stack myst(10);
myst.push1(1);
myst.push1(2);
myst.push1(3);
myst.push1(4);
myst.push1(5);
myst.push2(10);
myst.push2(20);
myst.push2(30);
myst.push2(40);
myst.push2(50);
myst.pop1();
myst.pop2();
cout<<myst.top1;
cout<<myst.top2;
myst.print();
    return 0;
}