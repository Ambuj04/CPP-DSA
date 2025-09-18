/*
// Tree Node
class Node {
 public:
   int data;
   Node* left;
   Node* right;
   // Constructor to initialize a new node
   Node(int val) {
       data = val;
       left = NULL;
       right = NULL;
   }
};
*/
class Solution
{
public:
    void traverseLeft(Node *root, vector<int> &ans)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->left == NULL && root->right == NULL)
        {
            return;
        }
        ans.push_back(root->data);
        if (root->left)
        {
            traverseLeft(root->left, ans);
        }
        else
        {
            traverseLeft(root->right, ans);
        }
    }
    void traverseLeaf(Node *root, vector<int> &ans)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->left == NULL && root->right == NULL)
        {
            ans.push_back(root->data);
        }
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
    }
    void traverseRight(Node *root, vector<int> &ans)
    {
        if (root == NULL)
        {
            return;
        }
        if (root->left == NULL && root->right == NULL)
        {
            return;
        }
        if (root->right)
        {
            traverseRight(root->right, ans);
        }
        else
        {
            traverseRight(root->left, ans);
        }
        // wps aao toh store
        ans.push_back(root->data);
    }
    vector<int> boundaryTraversal(Node *root)
    {
        vector<int> ans;
        if (root == NULL)
        {
            return ans;
        }
        ans.push_back(root->data);
        // left part store
        traverseLeft(root->left, ans);
        // leaf part store(left and right subtree)
        traverseLeaf(root->left, ans);
        traverseLeaf(root->right, ans);
        // right part store
        traverseRight(root->right, ans);
        return ans;
    }
};