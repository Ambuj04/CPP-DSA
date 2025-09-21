LeetCode Logo
Problem List
Debugging...
Debugging...










avatar
Avatar
ambuj_chaurasia
Access all features with our Premium subscription!
myLists
My Lists
notebook
Notebook
progress
Progress
points
Points
Try New Features
Orders
My Playgrounds
Settings
Appearance
Sign Out
Premium
Description
Description
Accepted
Editorial
Editorial
Solutions
Solutions
Submissions
Submissions


Code


Testcase
Testcase
Test Result
C++
Auto





13141516171819202122232425262728
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int &k) {
        //bc
        if(root==nullptr){

Saved
Accepted
0 ms
Case 1
Case 2
Input
root =
[5,3,6,2,4,null,null,1]
k =
3
Output
3
Expected
3
Contribute a testcase
All Submissions

Accepted
93 / 93 testcases passed
ambuj_chaurasia
ambuj_chaurasia
submitted at Sep 20, 2025 23:24

Editorial

Solution
Runtime
0
ms
Beats
100.00%
Analyze Complexity
Memory
24.27
MB
Beats
89.89%
Analyze Complexity
Code
C++
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int &k) {
        //bc
        if(root==nullptr){
            //-1 reflects base condn reached
            return -1;
        }
  //inorder
        int leftAns = kthSmallest(root->left,k);
        if(leftAns != -1){
            return leftAns;
        }
        k--;
        if(k==0){
            return root->val;
        }
        int rightAns = kthSmallest(root->right,k);
      return rightAns;
    }
};
View less
 
More challenges
94. Binary Tree Inorder Traversal
671. Second Minimum Node In a Binary Tree
Write your notes here
Select related tags
0/5
Lowest Common Ancestor of a Binary Search Tree - LeetCode
Problem List
230


230. Kth Smallest Element in a BST
Med.