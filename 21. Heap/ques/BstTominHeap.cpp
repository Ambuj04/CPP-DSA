#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Inorder traversal to store BST elements in sorted order
void inorder(Node* root, vector<int>& arr) {
    if (!root) return;
    inorder(root->left, arr);
    arr.push_back(root->data);
    inorder(root->right, arr);
}

// Preorder traversal to assign values from sorted array to nodes (min heap property)
void bstToMinHeap(Node* root, vector<int>& arr, int& idx) {
    if (!root) return;
    root->data = arr[idx++];
    bstToMinHeap(root->left, arr, idx);
    bstToMinHeap(root->right, arr, idx);
}

// Main function to convert BST to Min Heap
void convertBstToMinHeap(Node* root) {
    vector<int> arr;
    inorder(root, arr); // Get sorted values
    int idx = 0;
    bstToMinHeap(root, arr, idx); // Assign in preorder
}

// Utility function to print preorder traversal
void preorder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Example usage
int main() {
    // Constructing a BST (CBT)
    Node* root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->left = new Node(5);
    root->right->right = new Node(7);

    convertBstToMinHeap(root);

    cout << "Preorder traversal of Min Heap:\n";
    preorder(root);
    cout << endl;

    // Free memory (not shown for brevity)
    return 0;
}