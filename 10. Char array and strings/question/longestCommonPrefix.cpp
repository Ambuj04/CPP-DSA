class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int i = 0;
        string ans = "";

        while (i < strs[0].size()) {
            char ch = strs[0][i];

            for (int j = 1; j < n; j++) {
                if (i >= strs[j].size() || strs[j][i] != ch) {
                    return ans;
                }
            }

            ans.push_back(ch);
            i++;
        }

        return ans;
    }
};
