//method 1 : greedy and map

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        unordered_map<string, vector<string>> map;
        // step 1 : traverse array and sort
        // step 2: Insert key with anagram in unordered list;
        for (int i = 0; i < strs.size(); i++)
        {
            string str = strs[i];
            string sortedstr = strs[i];
            sort(sortedstr.begin(), sortedstr.end());
            map[sortedstr].push_back(str);
        }
        // step 3 : extract map value vector from key;
        vector<vector<string>> ans;
        for (auto key : map)
        {
            ans.push_back(key.second);
        }
        // step 4 : return the vector
        return ans;
    }
};

//method 2 greedy and frequency table

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> mp;

        for (string str : strs) {
            // Step 1: Build a frequency count of 26 characters
            int count[26] = {0};
            for (char ch : str) {
                count[ch - 'a']++;
            }

            // Step 2: Convert frequency array to a unique key string
            string key = "";
            for (int i = 0; i < 26; i++) {
                key += "#" + to_string(count[i]);  // Add separator to avoid ambiguity
            }

            // Step 3: Group anagrams by key
            mp[key].push_back(str);
        }

        // Step 4: Collect results
        vector<vector<string>> result;
        for (auto& entry : mp) {
            result.push_back(entry.second);
        }

        return result;
    }
};
