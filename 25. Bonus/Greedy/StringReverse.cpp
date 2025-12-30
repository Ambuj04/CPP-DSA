class Solution
{
public:
    string reverseWords(string &s)
    {
        // code here
        string ans = "";
        string temp = "";
        int start = 0, end = s.size() - 1;
        // remove dots from start
        while (start <= end && s[start] == '.')
        {
            start++;
        }
        // remove dots from end
        while (end >= start && s[end] == '.')
        {
            end--;
        }
        string result = s.substr(start, end - start + 1);
        for (int i = result.length() - 1; i >= 0; i--)
        {
            if (result[i] == '.' && result[i - 1] != '.')
            {
                reverse(temp.begin(), temp.end());
                ans = ans + temp;
                ans.push_back('.');
                temp = "";
            }
            else if (result[i] != '.')
            {
                temp.push_back(result[i]);
            }
        }
        reverse(temp.begin(), temp.end());
        ans = ans + temp;
        return ans;
    }
};