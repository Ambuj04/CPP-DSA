// Deq (doubly ended queue) or cicularly Deq
#include <iostream>
using namespace std;
class Deque
{
public:
    int *arr;
    int front;
    int back;
    int size;
    Deque(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void push_rear(int data)
    {
        if (front == 0 && rear == size - 1)
        {
            cout << "full";
        }
        else if (rear == front - 1)
        {
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

    void push_front(int data){
        if (front == 0 && rear == size - 1)
        {
            cout << "full";
        }
        else if (rear == front - 1)
        {
            cout << "full";
        }
        else if (front == -1)
        {
            front = rear = 0;
            arr[front] = data;
        }
        else if (front == 0 && rear != size-1;)
        {
            front = n-1;
            arr[front] = data;
        }
        else
        {
            front--;
            arr[front] = data;
        }

    }
    void pop_front(){
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

    void pop_rear(){
       if(front == -1){
            cout<<"empty";

        }else if(front == rear){
            arr[front] = -1;
            front = rear = -1;
        }else if(rear == 0){
            rear = size -1;
        }else{
            rear--;
        }


    }
} int main()
{
    return 0;
}