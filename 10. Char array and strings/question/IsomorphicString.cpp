class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        int mapST[256] = {0}; // s -> t
        int mapTS[256] = {0}; // t -> s

        for (int i = 0; i < s.length(); i++) {
            char cs = s[i];
            char ct = t[i];

            if (mapST[cs] == 0 && mapTS[ct] == 0) {
                // Create new mapping
                mapST[cs] = ct;
                mapTS[ct] = cs;
            } else {
                // Existing mapping must be consistent
                if (mapST[cs] != ct || mapTS[ct] != cs)
                    return false;
            }
        }

        return true;
    }
};
