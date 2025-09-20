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
Node *insertIntoBST(Node *root, int data)
{
    if (root == NULL)
    {
        // first Node
        root = new Node(data);
        return root;
    }
    // other nodes
    if (root->data > data)
    {
        // left insert
        root->left = insertIntoBST(root->left, data);
    }
    else
    {
        // right insert
        root->right = insertIntoBST(root->right, data);
    }
    return root;
}
void takeInput(Node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = insertIntoBST(root, data);
        cin >> data;
    }
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
Node *findNodeInBST(Node *root, int target)
{
    if (root == NULL)
    {
        return nullptr;
    }
    if (root->data == target)
    {
        return root;
    }
    if (target > root->data)
    {
        return findNodeInBST(root->right, target); // ✅ return, don’t assign
    }
    else
    {
        return findNodeInBST(root->left, target); // ✅ return, don’t assign
    }
}
int maxValue(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
    {
        return -1;
    }
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}
Node *deleteNodeInBST(Node *root, int target)
{
    if (root == nullptr)
    {
        return root;
    }
    if (root->data == target)
    {
        // 4 cases
        if (root->left == nullptr && root->right == nullptr)
        {
            delete root;
            return nullptr;
        }
        else if (root->left == nullptr && root->right != nullptr)
        {
            Node *child = root->right;
            delete root;
            return child;
        }
        else if (root->left != nullptr && root->right == nullptr)
        {
            Node *child = root->left;
            delete root;
            return child;
        }
        else
        {
            int inorderPre = maxValue(root->left);
            root->data = inorderPre;
            root->left = deleteNodeInBST(root->left, inorderPre);
            return root;
        }
    }
    else if (target > root->data)
    {
        root->right = deleteNodeInBST(root->right, target);
    }
    else
    {
        root->left = deleteNodeInBST(root->left, target);
    }
    return root;
}
int main()
{
    Node *root = NULL;
    cout << "Enter data :" << endl;
    // assuming only unique data is exist
    takeInput(root);
    levelOrderTraversal(root);
    root = deleteNodeInBST(root, 40); // when main root delete then this is the tree is also avialable for traversal
    levelOrderTraversal(root);
    return 0;
}
// 50 30 70 20 40 60 80 -1