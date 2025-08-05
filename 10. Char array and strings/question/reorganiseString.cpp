class Solution
{
public:
    string reorganizeString(string s)
    {
        string ans(s.length(), ' ');
        // step 1: frequency table
        vector<pair<int, char>> freqTable;
        int frequency[26] = {0};
        // step 2: store letter's frequency
        for (int i = 0; i < s.length(); i++)
        {
            int index = s[i] - 'a';
            frequency[index] = frequency[index] + 1;
        }
        // step 3:store most occuring then store index
        for (int i = 0; i < 26; i++)
        {
            if (frequency[i] > 0)
            {
                freqTable.push_back({frequency[i], 'a' + i});
            }
        }
        // sterp 4: store max occur
        sort(freqTable.rbegin(), freqTable.rend());
        int highestFreq = freqTable[0].first;
        // step 5:check max frequncy condition
        if (highestFreq <= (s.length() + 1) / 2)
        {
            // step 5: place most frequent in even then rmaining in odd
            int index = 0;
            for (auto p : freqTable)
            {
                int count = p.first;
                char letter = p.second;
                while (count-- > 0)
                {
                    if (index >= s.length())
                    {
                        index = 1; // switch to odd index
                    }
                    ans[index] = letter;
                    index += 2;
                }
            }
            return ans;
        }
        else
        {
            string ans1 = "";
            return ans1;
        }
    }
};