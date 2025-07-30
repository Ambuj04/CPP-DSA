// doubly lined list
#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->prev = nullptr;
        this->next = nullptr;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = nullptr;
        this->next = nullptr;
    }
    ~Node()
    {
        cout<<"Node with value : "<<this->data<<" deleted";
        cout<<endl;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
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
void inserAtHead(Node *&head, Node *tail, int data)
{
    if (head == nullptr)
    {
        // LL is empty
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // Non empty LL
        // s1 create node
        Node *newNode = new Node(data);
        // s2
        newNode->next = head;
        // s3
        head->prev = newNode;
        // s4
        head = newNode;
    }
    return;
}
void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (tail == nullptr)
    {
        // LL empty
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // LL have elements
        Node *newNode = new Node(data);
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
    }
    return;
}
void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    int length = getLength(head);
    if (head == nullptr || position == 1)
    {
        // first Node
        inserAtHead(head, tail, data);
    }
    else if (position > length)
    {
        // last node
        insertAtTail(head, tail, data);
    }
    else
    {
        // 2nd node to last 2nd node
        int i = 1;
        Node *prevNode = head;
        while (i < position - 1)
        {
            prevNode = prevNode->next;
            i++;
        };
        Node *newNode = new Node(data);
        // with current node
        { // here order is not matter
            // Node* currNode = prevNode->next;
            // prevNode->next = newNode;
            // newNode->prev = prevNode;
            // newNode->next = currNode;
            // currNode->prev = newNode;
        }
        // without current node
        { // here order matters
            (prevNode->next)->prev = newNode;
            newNode->next = prevNode->next;
            prevNode->next = newNode;
            newNode->prev = prevNode;
        }
    }
    return;
}
void deleteFromPosition(Node* &head,Node* &tail,int position){
    int length = getLength(head);
     if(head == nullptr || position>length){
        cout<<"can't delete";
        return;
     }else if(head->next == nullptr){
        //single node
        Node *temp = head;
        head = nullptr;
        tail = nullptr;
        delete temp; 
        return;
     }else{
        if(position == 1){
    //want to delete the first node
        Node* temp = head;
        head = head->next;
        head->prev = nullptr;
        temp->next = nullptr;
        delete temp;
        return;
        }else if(position == length){
            //delete from last node
            Node* temp = tail;
            tail = tail->prev;
            temp->next = nullptr;
            temp->prev = nullptr;
            tail->next = nullptr;
            delete temp;
            return;
        }else{
            //delete from position
            //s1 find left right and current nodes
            int i = 1;
            Node* leftNode = head;
            while(i<position-1){
                    leftNode = leftNode->next;
                    i++;
            }
            Node* currNode = leftNode->next;
            Node* rightNode = currNode->next;

            //s2 
            leftNode->next = rightNode;
            rightNode ->prev = leftNode;

            // s3
            currNode -> next = nullptr;
            currNode->prev = nullptr;

            //s4
            delete currNode;
            return;

        }
    
     }
}
int main()
{
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *head = first;
    Node *tail = third;
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    // print(first);
    // cout << endl;
    inserAtHead(head, tail, 4);
    // print(head);
    insertAtTail(head, tail, 5);
    // cout << endl;
    // print(head);
    insertAtPosition(head, tail, 3, 6);
    // cout << endl;
    print(head);
    cout << endl;
    deleteFromPosition(head,tail,5);
    print(head);

    return 0;
}