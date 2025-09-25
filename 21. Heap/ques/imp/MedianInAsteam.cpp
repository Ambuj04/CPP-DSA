class Solution {
public:
    int signum(int a, int b) {
        if (a == b) return 0;
        if (a > b) return 1;
        return -1;
    }

    void callMedian(int element,
                    priority_queue<int>& maxHeap,  // left side
                    priority_queue<int, vector<int>, greater<int>>& minHeap, // right side
                    double &median) {

        switch (signum(maxHeap.size(), minHeap.size())) {

        // Both heaps equal size
        case 0:
            if (element > median) {
                minHeap.push(element);
                median = minHeap.top();
            } else {
                maxHeap.push(element);
                median = maxHeap.top();
            }
            break;

        // maxHeap bigger
        case 1:
            if (element > median) {
                minHeap.push(element);
            } else {
                minHeap.push(maxHeap.top());
                maxHeap.pop();
                maxHeap.push(element);
            }
            median = (maxHeap.top() + minHeap.top()) / 2.0;
            break;

        // minHeap bigger
        case -1:
            if (element > median) {
                maxHeap.push(minHeap.top());
                minHeap.pop();
                minHeap.push(element);
            } else {
                maxHeap.push(element);
            }
            median = (maxHeap.top() + minHeap.top()) / 2.0;
            break;
        }
    }

    vector<double> getMedian(vector<int> &arr) {
        vector<double> ans;
        priority_queue<int> maxHeap;  // max-heap (left half)
        priority_queue<int, vector<int>, greater<int>> minHeap; // min-heap (right half)
        double median = 0.0;

        for (int x : arr) {
            callMedian(x, maxHeap, minHeap, median);
            ans.push_back(median);
        }
        return ans;
    }
};
