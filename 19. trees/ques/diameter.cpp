//longest path between any end 2 nodes (leaf or root)
//numbers of node is called diameter or width
/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {


public:
    pair<int,int> diameterFast(Node* root) {
        if (root == NULL) {
            return {0, 0}; // {diameter, height}
        }

        pair<int,int> left = diameterFast(root->left);
        pair<int,int> right = diameterFast(root->right);

        int op1 = left.first;                  // diameter in left subtree
        int op2 = right.first;                 // diameter in right subtree
        int op3 = left.second + right.second+1  ; // diameter through root

        pair<int,int> ans;
        ans.first = max({op1, op2, op3});             // best diameter
        ans.second = max(left.second, right.second) + 1; // height
        return ans;
    }

    int diameter(Node* root) {
        return diameterFast(root).first;
    }
};
