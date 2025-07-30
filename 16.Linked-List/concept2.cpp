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

    ~Node(){
        //todo : write a destructor to delete a node
    }
};

// Removed duplicate definition of findlegth



void print(Node* &head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void insertAtHead(Node* &head,Node* &tail,int data){
     if(head == nullptr) {
        Node* newNode = new Node(data); // Create a new node with the given data
        head = newNode; // If head was null, it should point to the new node    
        tail = newNode; // If head was null, tail should also point to the new node
        return; // Exit the function since we have inserted the first node

        
    }
   

    // Create a new node and insert it at the head
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
   
}

void insertAtTail(Node* &head,Node* &tail,int data){

    if(tail == nullptr){
        Node* newNode = new Node(data); // Create a new node with the given data
        // If tail was null, it means the list is empty 
        tail = newNode;
        head = newNode; // If tail was null, head should also point to the new node
        return; // Exit the function since we have inserted the first node  

    }
    
        Node* newNode = new Node(data); // Create a new node with the given data
    //connect with tail node
    tail->next = newNode;
    // Update the tail pointer to point to the new node
    tail = newNode;
}

int findlegth(Node* &head){
    int count = 0;
    Node* temp = head;
    while(temp != nullptr){
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtPosition(Node* &head, Node* &tail, int data, int position) {
    if(head == nullptr || position == 1) {
      Node* newNode = new Node(data);
      head = newNode; // If head was null, it should point to the new node
      tail = newNode; // If head was null, tail should also point to the new node
        return;
    }

    //find prev and current pointer
    if(position == 0){
        insertAtHead(head, tail, data);
        return;
    }

    int len = findlegth(head);
    if(position >= len){
        insertAtTail(head, tail, data);
        return; 
    }



    int i = 1;
    Node *prev = head;
    while(i<position){
        prev = prev->next;
        i++;

    }
    Node* current = prev->next; 

    //creeate a new node and insert it at the position
    Node* newNode = new Node(data);;

    newNode->next = current; // Link the new node to the current node

    prev->next = newNode; // Link the previous node to the new node

}

void deleteNode(Node* &head, Node* &tail, int position) {
    if (head == nullptr) {
        cout << "can't delete empty" << endl;
        return;
    }

    int len = findlegth(head);

    if (position < 1 || position > len) {
        cout << "Invalid position" << endl;
        return;
    }

    // Delete head node
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        temp->next = nullptr;
        delete temp;
        if (head == nullptr) {
            tail = nullptr;
        }
        return;
    }

    // Delete tail node
    if (position == len) {
        Node* prev = head;
        for (int i = 1; i < len - 1; ++i) {
            prev = prev->next;
        }
        Node* temp = tail;
        tail = prev;
        tail->next = nullptr;
        delete temp;
        return;
    }

    // Delete node at position
    Node* prev = head;
    for (int i = 1; i < position - 1; ++i) {
        prev = prev->next;
    }
    Node* curr = prev->next;
    prev->next = curr->next;
    curr->next = nullptr;
    delete curr;
}
 

int main(){
  
    // Node* head = new Node(10);
    Node* head = nullptr;
    Node* tail = nullptr;
   
    insertAtHead(head,tail, 20);
    insertAtHead(head,tail, 30);
    insertAtHead(head,tail, 40);
    insertAtHead(head,tail, 50);
    insertAtHead(head,tail, 60);
    insertAtTail(head,tail, 10);
    // print(head);
    cout << endl;
    // cout<<"head " <<head->data<<endl;
    // cout<<"tail " <<tail->data<<endl;
    // insertAtPosition(head, tail, 25, 0);
    insertAtPosition(head, tail, 250, 7);
    print(head);
    cout<<endl<<"head " <<head->data<<endl;
    cout<<"tail " <<tail->data<<endl;

    return 0;
}  