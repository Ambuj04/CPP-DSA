#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* bstUsingInorder(int inorder[],int s,int e){
    //bc 
    if(s>e){
        return nullptr;
    }
    int mid = (s+e)/2;
    int element = inorder[mid];
    Node* root = new Node(element);
    root->left = bstUsingInorder(inorder,s,mid-1);
    root->right = bstUsingInorder(inorder,mid+1,e);
    return root;
}
void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL); // separator for separate level
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            // purana level complete traverse
            cout << endl;
            if (!q.empty())
            {
                // queue have still child Node
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
void convertIntoSortedDLL(Node* root, Node* &head) {
    if(root == NULL) return;

    // right subtree first
    convertIntoSortedDLL(root->right, head);

    // attach root node
    root->right = head;
    if(head != NULL) {
        head->left = root;
    }

    // update head
    head = root;

    // left subtree
    convertIntoSortedDLL(root->left, head);
}
Node* sortedDLLintoBst(Node* &head, int n) {
    if (n <= 0 || head == NULL) {
        return nullptr;
    }

    // Build left subtree from first half
    Node* leftSubtree = sortedDLLintoBst(head, (n-1)/2);

    // Current node becomes root
    Node* root = head;
    root->left = leftSubtree;

    // Move head to next DLL node
    head = head->right;

    // Build right subtree from second half
    root->right = sortedDLLintoBst(head, n/2);

    return root;
}


void printdLL(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->right;
    }
    cout << endl;
}
int main()
{
  int inorder[] = {1,2,3,4,5,6,7,8,9};
  int s = 0;
  int e = 8;
  Node* root = nullptr;
  Node* head = nullptr;
  //bst by inorder
   root = bstUsingInorder(inorder,s,e);
   levelOrderTraversal(root);
   cout<<endl;
   // dll by bst
   convertIntoSortedDLL(root,head);
   printdLL(head);
   cout<<"level order traversal for root1"<<endl;
   //bst by dll
   Node* root1 = nullptr;
   root1 = sortedDLLintoBst(head,9);
   levelOrderTraversal(root1);
    return 0;
}
