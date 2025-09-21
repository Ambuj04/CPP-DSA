class Solution {
public:
    // Step 1: Do inorder traversal and store elements in a vector
    void inorder(TreeNode* root, vector<int>& nodes) {
        if (!root) return;
        inorder(root->left, nodes);
        nodes.push_back(root->val);
        inorder(root->right, nodes);
    }

    // Step 2: Build balanced BST from sorted vector
    TreeNode* buildBalancedBST(vector<int>& nodes, int start, int end) {
        if (start > end) return nullptr;

        int mid = start + (end - start) / 2;  // choose middle
        TreeNode* root = new TreeNode(nodes[mid]);

        root->left = buildBalancedBST(nodes, start, mid - 1);
        root->right = buildBalancedBST(nodes, mid + 1, end);

        return root;
    }

    // Main function
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> nodes;
        inorder(root, nodes); // get sorted array
        return buildBalancedBST(nodes, 0, nodes.size() - 1);
    }
};
