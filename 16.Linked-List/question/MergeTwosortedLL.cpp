/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
     
if(list1 == 0) return list2;
if(list2 == 0) return list1;
ListNode* ans = new ListNode(-1);
ListNode* mptr = ans;

while(list1 != 0 && list2 != 0){

    if(list1->val <= list2->val){
        mptr->next = list1;
        mptr = mptr->next;
        list1 = list1->next;
    }else  if(list1->val > list2->val){
        mptr->next = list2;
        mptr = mptr->next;
        list2 = list2->next;
    }

}

if(list1 != 0){
    //remainint list1 LL
    mptr->next = list1;
   
}else if(list2 != 0){
    //remainint list2 LL
    mptr->next = list2;

}






      return ans->next;  
        
    }
};