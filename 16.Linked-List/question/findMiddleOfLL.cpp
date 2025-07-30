// very important topic
// tortuise algorith
// slow and fast approch
// two  pointer approach
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

Node *getMiddle(Node *&head)
{
    if (head == nullptr)
        return nullptr; // if the list is empty

    Node *slow = head;
    // Node *fast = head; 30 as an ans
    Node *fast = head->next; // //40 as an ans

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;       // move slow by 1 step
        fast = fast->next->next; // move fast by 2 steps
    }

    return slow; // slow will be at the middle when fast reaches the end
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    print(head);
    cout << getMiddle(head)->data;

    return 0;
};