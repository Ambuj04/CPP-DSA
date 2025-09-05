//O(n2)
/*

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

class Solution {
     int height(Node* node) { // no need of "struct"
        if (node == NULL) return 0;
        return 1 + max(height(node->left), height(node->right));
    }
  public:
    bool isBalanced(Node* root) {
        // Code here
        if(root == NULL){
            return true;
        }
        bool left = isBalanced(root->left);
        bool right = isBalanced(root->right);
        bool diff = abs(height(root->left)-height(root->right))<=1;
        if(left&&right&&diff){
            return true;
        }else{
            return false;
        }
    }
};
//O(n)
/*

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

class Solution {
     
  public:
  pair<bool,int>isBalancedFast(Node* root){
      if(root == NULL){
            pair<bool,int> p = make_pair(true,0);
            return p;
        }
        pair<bool,int> left = isBalancedFast(root->left);
        pair<bool,int> right = isBalancedFast(root->right);
        bool leftAns = left.first;
        bool rightAns = right.first;
        bool diff = abs(left.second-right.second)<=1;
        pair<bool,int> ans;
        ans.second = max(left.second,right.second)+1;
        if(leftAns&&rightAns&&diff){
            ans.first = true;
        }else{
            ans.first = false;
        }
        return ans;
  }
      
  
    bool isBalanced(Node* root) {
        // Code here
        return isBalancedFast(root).first;
        
    }
};