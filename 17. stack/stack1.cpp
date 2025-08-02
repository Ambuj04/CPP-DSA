#include <iostream>
#include <stack>
using namespace std;
class mystack{ // for selfmade just for fun (1 stack in 1 array)
    int *arr;
    int size;
    int top;
    public:
    mystack(int size){
        arr = new int[size];
        this->size = size;
        top = -1;
    }
    //stack function
    void push(int data){
        if(size-top>1){
            //space available
            top++;
            arr[top] = data;
        }else{
            cout<<"stack overflow";
        }
    }
    void pop(){
        if(top != -1){
            //thing avail for remove
            arr[top] = 0;
            top--;
        }else{
            cout<<"stack underflow";
        }
    }
    int getTop(){
        if(top != -1){
            return arr[top];
        }else{
            cout<<"stack underflow";
            return -1;
        }
    }
    int getSize(){
            int totalelem = top+1;
            return totalelem;
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }
};
int main()
{//by STL
    // creation
    stack<int> st;
    // insertion
    st.push(5);
    st.push(6);
    st.push(8);
    st.push(45);
    st.push(90);
    // delete
    st.pop();
    //   cout<<st.top(); //return last element
    // print elements in stack
    while (!(st.empty()))
    {
        // cout << st.top() << " ";
        st.pop();
    }
    // cout << st.empty(); // 1
//check for self made
mystack test(10);
test.push(5);
test.push(15);
test.push(25);
test.push(35);
test.push(45);
test.pop();
cout<<test.getTop();
cout<<endl;
cout<<test.getSize();
cout<<endl;
cout<<test.isEmpty();
cout<<endl;
while(!(test.isEmpty())){
    cout<<test.getTop()<<"  ";
    test.pop();
}
    return 0;
}