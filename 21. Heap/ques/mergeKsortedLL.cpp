// Definition for singly-linked list.
/*struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};
*/
class compare {
public:
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val; // min-heap
    }
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        // Min-heap of list nodes
        priority_queue<ListNode*, vector<ListNode*>, compare> minHeap;
        
        // Step 1: Push the head of each list
        for (auto head : lists) {
            if (head != nullptr) {
                minHeap.push(head);
            }
        }

        // Dummy node to build result
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;

        // Step 2: Process heap
        while (!minHeap.empty()) {
            ListNode* node = minHeap.top();
            minHeap.pop();

            // Append smallest node to result
            tail->next = node;
            tail = node;

            // If that list has more nodes, push next
            if (node->next != nullptr) {
                minHeap.push(node->next);
            }
        }

        return dummy->next;
    }
};
