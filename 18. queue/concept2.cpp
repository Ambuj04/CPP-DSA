//implement Linear queue by own
 #include<iostream>
 
 using namespace std;
 class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;

    }
    void push(int data){
        if(rear == size ){
            cout<<"full";
        }else{
            arr[rear] = data;
            rear++;
        }
    }
    void pop(){
        if(front == rear){
            cout<<"empty";
        }else{
            arr[front] = -1;
            front++;
            if(front == rear){
                front = 0;
                rear = 0;
            }
        }
    }

    int getFront(){
        if(front == rear){
            cout<<"empty";
            return -1;
        }else{
            return arr[front];
        }
    }

    bool isEmpty(){
       return front == rear ? true : false;
    }

    int getSize(){
        return rear-front;
    }
 };
 int main(){
   Queue q(10);

   q.push(5);
   q.push(6);
   q.push(61);
   q.push(64);
   q.push(68);

   cout<<q.getSize();//5
   q.pop();
   cout<<q.getSize();//4
   cout<<q.getFront();//6
   cout<<q.isEmpty();//0
   cout<<endl;
   while(!q.isEmpty()){
    cout<<q.getFront()<<" ";
    q.pop();
   }

  
 return 0;
  }