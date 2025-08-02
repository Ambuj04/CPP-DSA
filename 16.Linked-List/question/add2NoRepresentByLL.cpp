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
Node *reverse(Node *head)
{
    Node *prev = nullptr;
    Node *curr = head;
    Node *next = curr->next;
    while (curr != nullptr)
    {
        next = curr->next; // Store the next node
        curr->next = prev; // Reverse the link
        prev = curr;       // Move prev to current
        curr = next;       // Move to the next node
    }
    return prev; // New head of the reversed linked list
}
Node *solve(Node *&head1, Node *&head2)
{
    // reverse both LL
    head1 = reverse(head1);
    head2 = reverse(head2);
    // Add both LL
    Node *ansHead = nullptr;
    Node *ansTail = nullptr;
    int carry = 0;
    while (head1 != nullptr && head2 != nullptr)
    {
        int sum = carry + head1->data + head2->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);
        if (ansHead == nullptr)
        {
            // first node insert
            ansHead = newNode;
            ansTail = newNode;
        }
        else
        {
            ansTail->next = newNode;
            ansTail = newNode;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    while (head1 != nullptr)
    {
        int sum = carry + head1->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head1 = head1->next;
    }
    while (head2 != nullptr)
    {
        int sum = carry + head2->data;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head2 = head2->next;
    }
    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        carry = sum / 10;
        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
    }
    // reverse the answer LL
    Node *ans = reverse(ansHead);
    return ans;
}
int main()
{
    Node *head1 = new Node(4);
    Node *second1 = new Node(9);
    head1->next = second1;
    Node *head2 = new Node(9);
    Node *second2 = new Node(9);
    Node *third2 = new Node(9);
    head2->next = second2;
    second2->next = third2;
    Node *ans = solve(head1, head2);
    print(ans);
    return 0;
};