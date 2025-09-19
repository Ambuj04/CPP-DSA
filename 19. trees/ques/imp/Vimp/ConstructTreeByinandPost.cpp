/*
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/
class Solution
{
public:
    void createMapping(vector<int> &inorder, map<int, int> &nodeToIndex, int n)
    {
        for (int i = 0; i < n; i++)
        {
            nodeToIndex[inorder[i]] = i;
        }
    }
    Node *solve(vector<int> &inorder, vector<int> &postorder, int &index,
                int inorderStart, int inorderEnd, int n, map<int, int> &nodeToIndex)
    {
        if (index < 0 || inorderStart > inorderEnd)
        {
            return NULL;
        }
        int element = postorder[index--];
        Node *root = new Node(element);
        int position = nodeToIndex[element];
        root->right = solve(inorder, postorder, index, position + 1, inorderEnd, n, nodeToIndex);
        root->left = solve(inorder, postorder, index, inorderStart, position - 1, n, nodeToIndex);
        return root;
    }
    Node *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        // code here
        int n = inorder.size();
        int postOrderIndex = n - 1;
        int inOrderStartIndex = 0;
        int inOrderEndIndex = inorder.size() - 1;
        map<int, int> nodeToIndex;
        createMapping(inorder, nodeToIndex, n);
        Node *ans = solve(inorder, postorder, postOrderIndex, inOrderStartIndex, inOrderEndIndex, n, nodeToIndex);
        return ans;
    }
};