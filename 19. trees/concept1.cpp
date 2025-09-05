#include <iostream>
#include <queue>

using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node *buildTree(node *root)
{
    cout << endl;
    cout << "Enter a data : ";
    cout << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
    {
        return nullptr;
    }
    cout << "Enter data for insert in left " << data;
    root->left = buildTree(root->left);
    cout << endl;
    cout << "Enter data for insert in right " << data;
    root->right = buildTree(root->right);
    cout << endl;

    return root;
}

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL); // separator for separate level
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            // purana level complete traverse
            cout << endl;
            if (!q.empty())
            {
                // queue have still child node
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

void inOrder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void preOrder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(node* &root)
{
    queue<node *> q;
    cout << "Enter data for root" << endl;
    int data;
    cin >> data;
    if (data == -1) {
        root = nullptr;
        return;
    }
    root = new node(data);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "enter left node for :" << temp->data << endl;
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout << "enter right node for :" << temp->data << endl;
        int rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}
int main()
{
    node *root = nullptr;

    

    // creating a tree
    // root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 15 -1 -1

    //(level order means queue)

    // level order traverse
    // cout << "level order :" << endl;
    // levelOrderTraversal(root);

    // // Homework(level order but in inverse)

    // // Inorder traversal
    // cout << "Inorder traversal :" << endl;
    // inOrder(root);
    // cout << endl;
    // // Inorder traversal
    // cout << "preorder traversal :" << endl;
    // preOrder(root);
    // cout << endl;

    // // Inorder traversal
    // cout << "Postorder traversal :" << endl;
    // postOrder(root);
    // cout << endl;

   
    //After inorder traversal(after line 180)
     buildFromLevelOrder(root);
     levelOrderTraversal(root);

    return 0;
}