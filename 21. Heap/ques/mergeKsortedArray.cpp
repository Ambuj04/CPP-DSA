class node
{
public:
    int data;
    int i; // row
    int j; // column
    node(int a, int b, int c)
    {
        data = a;
        i = b;
        j = c;
    }
};
class compare
{
public:
    bool operator()(node *a, node *b)
    {
        return a->data > b->data; // min-heap
    }
};
class Solution
{
public:
    // Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        priority_queue<node *, vector<node *>, compare> minHeap;
        // Insert first element of each array
        for (int i = 0; i < K; i++)
        {
            node *temp = new node(arr[i][0], i, 0);
            minHeap.push(temp);
        }
        vector<int> ans;
        // Process heap until empty
        while (!minHeap.empty())
        {
            node *tmp = minHeap.top();
            minHeap.pop();
            ans.push_back(tmp->data);
            int i = tmp->i;
            int j = tmp->j;
            // If next element exists in same row, push it
            if (j + 1 < arr[i].size())
            {
                node *next = new node(arr[i][j + 1], i, j + 1);
                minHeap.push(next);
            }
        }
        return ans;
    }
};
