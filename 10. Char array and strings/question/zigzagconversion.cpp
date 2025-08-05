class Solution
{
public:
        string convert(string s, int numRows)
        {
                if (numRows == 1)
                        return s;
                vector<string> answer(numRows);
                string ans = "";
                bool UptoDown = true;
                int row = 0;
                for (char c : s)
                {
                        // insert character
                        answer[row] += c;
                        // update uptodown
                        if (row == 0 || row = numRows - 1)
                        {
                                UptoDown = !UptoDown;
                        }
                        // update row
                        row += UptoDown ? 1 : -1;
                }
                for (int i = 0; i < answer.size(); i++)
                {
                        ans += answer[i];
                }
                return ans;
        }
};