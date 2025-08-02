#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

void fun(Node* &head,int &k,int &ans){
     if(head == nullptr){
        return;
     }
     fun(head->next,k,ans);
   
     if(k==0){
        ans = head->data;
    }
    k--;
    
}


int main(){//work for both even and odd length linked list
    // Create a linked list: 10 -> 20 -> 30 -> 20 -> 10
    
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

int ans = -1;
int k = 2;
fun(head,k,ans);
cout<<ans;

    return 0;
}