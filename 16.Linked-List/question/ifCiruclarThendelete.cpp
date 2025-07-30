//check loop is present in LL or not
//starting point of loop
//remove loop


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

bool checkForLoop(Node* &head){
    // Floyd's cycle detection algorithm
    // using two pointer approach
    if(head == nullptr){
        return false;
    }
    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast->next != nullptr && fast->next->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true; // loop is present
        }
    }
    return false; // loop is not present
}

Node* startingPointLoop(Node* &head){


    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast->next != nullptr && fast->next->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
        slow = head;
        break;    
        }
    }

    while(slow != fast){
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}


int main(){
    //singly linked list(normal method for creation)
 Node* first = new Node(1);
 Node* second = new Node(2);
 Node* third = new Node(3);
 Node* fourth = new Node(4);
 Node* fifth = new Node(5);
 Node* sixth= new Node(6);
 Node* seventh= new Node(7);
 Node* eighth= new Node(8);
 Node* nineth= new Node(9);
 first->next = second;
 second->next = third;
 third->next = fourth;
 fourth->next = fifth;
 fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = nineth;
    nineth->next = fifth; //creating a loop in the linked list
cout<<checkForLoop(first)<<endl; //checking for loop
cout<<startingPointLoop(first)->data<<endl; //checking for starting point of loop


return 0;
 }