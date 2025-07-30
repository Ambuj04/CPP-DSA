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

Node* reverse(Node* head){
    Node* prev = nullptr;
    Node* curr = head;
    Node* next = curr->next;
    while(curr != nullptr){
        next =curr->next; // Store the next node
        curr->next = prev; // Reverse the link
        prev = curr; // Move prev to current
        curr = next; // Move to the next node
    }
    return prev; // New head of the reversed linked list
}

bool isPalindrome(Node* head){
    if(head == nullptr || head->next == nullptr) {
        return true; // An empty list or a single node is a palindrome
    }

    //find middle of the linked list
    Node* slow = head;
    Node* fast = head;
    while(fast != nullptr && fast->next != nullptr && fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    };
    //slow pointer points to the middle of the linked list

    //reverse the second half of the linked list
    Node* reverseLLkaHead = reverse(slow->next);

    //join the reverse LL after middle/slow node
    slow->next = reverseLLkaHead;

    //start comparison
    Node* temp1 = head;
    Node* temp2 = reverseLLkaHead;
    while(temp2 != nullptr){
        if(temp1->data != temp2->data){
            return false;
        }else{
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true; // If all nodes matched, it's a palindrome

}
int main(){//work for both even and odd length linked list
    // Create a linked list: 10 -> 20 -> 30 -> 20 -> 10
    
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(20);
    Node* fifth = new Node(10);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Check if the linked list is a palindrome
    if (isPalindrome(head)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}