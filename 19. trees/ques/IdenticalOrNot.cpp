/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    bool isIdentical(Node* root1, Node* root2) {
        // code here
        if(root1 == nullptr && root2 == nullptr){
            return true;
        }else if(root1 == nullptr && root2 != nullptr){
            return false;
        }else if(root1 != nullptr && root2 == nullptr){
            return false;
        }
        bool left = isIdentical(root1->left,root2->left);
        bool right = isIdentical(root1->right,root2->right);
        bool value = root1->data == root2->data;
        if(left && right && value){
            return true;
        }else{
            return false;
        }
        
    }
};