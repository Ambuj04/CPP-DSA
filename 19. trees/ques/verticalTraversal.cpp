class Solution
{
public:
    vector<vector<int>> verticalOrder(Node *root)
    {
        // map: hd -> (level -> list of nodes)
        map<int, map<int, vector<int>>> nodes;
        queue<pair<Node *, pair<int, int>>> q;
        vector<vector<int>> ans;
        if (root == NULL)
            return ans;
        q.push({root, {0, 0}}); // {node, {hd, level}}
        while (!q.empty())
        {
            auto temp = q.front();
            q.pop();
            Node *frontNode = temp.first;
            int hd = temp.second.first;   // horizontal distance
            int lvl = temp.second.second; // level
            nodes[hd][lvl].push_back(frontNode->data);
            if (frontNode->left)
            {
                q.push({frontNode->left, {hd - 1, lvl + 1}});
            }
            if (frontNode->right)
            {
                q.push({frontNode->right, {hd + 1, lvl + 1}});
            }
        }
        // Collect results after BFS
        for (auto &p : nodes)
        {
            vector<int> col;
            for (auto &q : p.second)
            {
                for (int val : q.second)
                {
                    col.push_back(val);
                }
            }
            ans.push_back(col);
        }
        return ans;
    }
};
