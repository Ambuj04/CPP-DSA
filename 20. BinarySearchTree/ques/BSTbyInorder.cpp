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
int main()
{
  int inorder[] = {1,2,3,4,5,6,7,8,9};
  int s = 0;
  int e = 8;
  Node* root = nullptr;
   root = bstUsingInorder(inorder,s,e);
   levelOrderTraversal(root);
    return 0;
}
// 50 30 70 20 40 60 80 -1