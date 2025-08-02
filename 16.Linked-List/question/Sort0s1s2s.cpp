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
void sortZeroOneTwo(Node *&head)
{
    if(head == nullptr && head->next == nullptr){
        return;
    };
    int zero = 0;
    int one = 0;
    int two = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == 0)
        {
            zero++;
        }
        else if (temp->data == 1)
        {
            one++;
        }
        else
        {
            two++;
        }

        temp = temp->next;
    }

    // fill zeor one and two in the original LL
    temp = head;

    // fil zeroes
    while (zero--)
    {
        temp->data = 0;
        temp = temp->next;
    }
    // fill ones
    while (one--)
    {
        temp->data = 1;
        temp = temp->next;
    }
    // fill twos
    while (two--)
    {
        temp->data = 2;
        temp = temp->next;
    }
}

Node *sort2(Node *&head)
{
    if(head == nullptr && head->next == nullptr){
        return head;
    }
    // create dummy nodes
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;

    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;

    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    // traverse the original LL
    Node *curr = head;
    while (curr != nullptr)
    {
        if (curr->data == 0)
        {
            Node *temp = curr;
            curr = curr->next;
            temp->next = nullptr;

            // append
            zeroTail->next = temp;
            zeroTail = temp;
        }
        else if (curr->data == 1)
        {
            Node *temp = curr;
            curr = curr->next;
            temp->next = nullptr;

            // append
            oneTail->next = temp;
            oneTail = temp;
        }
        else
        {
            Node *temp = curr;
            curr = curr->next;
            temp->next = nullptr;

            // append
            twoTail->next = temp;
            twoTail = temp;
        }
    }

    // ab teeno LL ready h for join

    // join them

    
    {
        Node *temp = oneHead;
        oneHead = oneHead->next;
        temp->next = nullptr;
        delete temp;
    }
    {
        Node *temp = twoHead;
        twoHead = twoHead->next;
        temp->next = nullptr;
        delete temp;
    }

    if (oneHead != NULL)
    {
        zeroTail->next = oneHead;
        if (twoHead != NULL)
         {

            oneTail->next = twoHead;
         }
    }
    else
    {
        
        
      
            if(twoHead!=nullptr){

                zeroTail->next = twoHead;
            }
    
    }

   {
        
        Node *temp = zeroHead;
        zeroHead = zeroHead->next;
        temp->next = nullptr;
        delete temp;
    }

    // return head
    return zeroHead;
}

int main()
{
    Node *head = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(1);
    Node *fourth = new Node(2);
    Node *fifth = new Node(2);
    Node *sixth = new Node(2);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    // print(head);
    // sortZeroOneTwo(head);
    head = sort2(head);
print(head);
    return 0;
}