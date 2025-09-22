#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Step 1: build balanced BST from inorder array
Node* bstUsingInorder(int inorder[], int s, int e) {
    if(s > e) return nullptr;

    int mid = (s + e) / 2;
    int element = inorder[mid];
    Node* root = new Node(element);

    root->left = bstUsingInorder(inorder, s, mid - 1);
    root->right = bstUsingInorder(inorder, mid + 1, e);
    return root;
}

// Step 2: convert BST into sorted DLL
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

// Step 3: print DLL
void printdLL(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->right;
    }
    cout << endl;
}

int main() {
    int inorder[] = {1,2,3,4,5,6,7,8,9};
    int s = 0, e = 8;

    // build balanced BST
    Node* root = bstUsingInorder(inorder, s, e);

    // convert BST into DLL
    Node* head = NULL;
    convertIntoSortedDLL(root, head);

    // print DLL
    printdLL(head);

    return 0;
}
