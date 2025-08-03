//reverse k group
//first reverse k nodes, then next k nodes, and so on
//if the last group has less than k nodes, do not reverse it
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->data = 0;
        this->next = nullptr;
    }
    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};
void print(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
Node* reverseKNodes(Node* &head,int k){
    int len = getLength(head);
    if(head == nullptr){
        //LL empty
        cout<<"LL empty";
        return head; 
    }else if(k > len){
        // cout<<"enter valid value for K";
        return head;
    }
    //It means number of nodes in ll is greater than equal to k
    //step A: reverse a first node of LL
    Node* prev = nullptr;
    Node* curr = head;
    Node* forward = curr->next;
    int count = 0;
    while(count<k){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    if(forward != nullptr){
        //we still have node left to reverse
        head->next =  reverseKNodes(forward,k);
    }
    return prev;
}
int main(){
    //singly linked list(normal method for creation)
 Node* first = new Node(1);
 Node* second = new Node(2);
 Node* third = new Node(3);
 Node* fourth = new Node(4);
 Node* fifth = new Node(5);
 Node* sixth= new Node(6);
 first->next = second;
 second->next = third;
 third->next = fourth;
 fourth->next = fifth;
 fifth->next = sixth;
 print(first);
 Node* head = first; 
cout<<endl;
 Node* prev = nullptr;
 Node* curr = head;
 head = reverseKNodes(head,5);
 print(head);
return 0;
 }