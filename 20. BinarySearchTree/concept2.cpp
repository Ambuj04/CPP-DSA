#include <iostream>
using namespace std;

struct Node {
    int key;
    Node *left, *right;
    Node(int k) : key(k), left(nullptr), right(nullptr) {}
};

// Insert a node into BST
Node* insert(Node* root, int key) {
    if (!root) return new Node(key);
    if (key < root->key)
        root->left = insert(root->left, key);
    else if (key > root->key)
        root->right = insert(root->right, key);
    return root;
}

// Find predecessor and successor
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key) {
    if (!root) return;

    if (root->key == key) {
        // Predecessor: rightmost of left subtree
        if (root->left) {
            Node* tmp = root->left;
            while (tmp->right)
                tmp = tmp->right;
            pre = tmp;
        }
        // Successor: leftmost of right subtree
        if (root->right) {
            Node* tmp = root->right;
            while (tmp->left)
                tmp = tmp->left;
            suc = tmp;
        }
        return;
    }

    if (root->key > key) {
        suc = root;
        findPreSuc(root->left, pre, suc, key);
    } else {
        pre = root;
        findPreSuc(root->right, pre, suc, key);
    }
}

int main() {
    Node* root = nullptr;
    int keys[] = {50, 30, 20, 40, 70, 60, 80};
    for (int k : keys)
        root = insert(root, k);

    int key = 65;
    Node *pre = nullptr, *suc = nullptr;
    findPreSuc(root, pre, suc, key);

    if (pre)
        cout << "Predecessor: " << pre->key << endl;
    else
        cout << "Predecessor: None" << endl;

    if (suc)
        cout << "Successor: " << suc->key << endl;
    else
        cout << "Successor: None" << endl;

    return 0;
}