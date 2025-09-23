#include<iostream>
#include<limits.h>
#include<queue>
using namespace std;
pair<bool,int> solve(Node* root){
    //bc
    if(root == nullptr){
        pair<bool,int>p= make_pair(true,INT_MIN);
        return p;
    }
    if(root->left == nullptr && root->right == nullptr){
        pair<bool,int>p= make_pair(true,root->data);
        return p;
    }
   pair<bool,int> leftAns = solve(root->left);
   pair<bool,int> rightAns = solve(root->right);
   if(leftAns.first == true && rightAns.first == true && root->data > leftAns.second && root->data>rightAns.second){

    pair<bool,int>ans = make_pair(true,root->data);
    return ans;
   }else{
    pair<bool,int>ans = make_pair(false,root->data);
    return ans;
}
} 

int main(){
  
 
return 0;
 }