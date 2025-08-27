// circular queue
#include <iostream>

using namespace std;
class ClrQueue
{
    int size;
    int *arr;
    int front;
    int rear;

public:
    ClrQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void push(int data)
    {
        // queue full

        // single element

        // circular

        // normal flow

        if (front == 0 && rear == size - 1)
        {
            cout << "full";
        }else if(rear == front-1){
            cout << "full";

        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop(){ 
        //empty check
        //single element
        //circular nature
        //normal flow
        if(front == -1){
            cout<<"empty";

        }else if(front == rear){
            arr[front] = -1;
            front = rear = -1;
        }else if(front == size -1){
            front = 0;
        }else{
            front++;
        }
    }
} int main()
{

    return 0;
}