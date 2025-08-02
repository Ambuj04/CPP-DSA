#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void removeDuplicate(Node* &head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return;
    }
    // more than 1 nodes
    Node* curr = head;
    while (curr != nullptr)
    {
        if ((curr->next != nullptr) && (curr->data == curr->next->data)  )
        {
            Node* temp = curr->next;
            //equal
            curr->next = curr->next->next;
            //delete node
            //good practice is to isolate node the delete it;
            temp->next = nullptr;
            delete temp;

        }else{
            curr = curr->next;
        }
    }
}
int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(20);
    Node *fourth = new Node(30);
    Node *fifth = new Node(40);
    Node *sixth = new Node(40);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    // print(head);
    removeDuplicate(head);
    print(head);
    return 0;
}