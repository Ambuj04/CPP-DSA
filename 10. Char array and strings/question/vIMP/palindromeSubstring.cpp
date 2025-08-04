//Brute Force
// class Solution
// {
// public:
//     bool isPalindrome(string &s)
//     {
//         int left = 0;
//         int right = s.size() - 1;
//         while (left < right)
//         {
//             if (s[left] != s[right])
//             {
//                 return false;
//             }
//             left++;
//             right--;
//         }
//         return true;
//     }
//     int countSubstrings(string s)
//     {
//         int count = 0;
//         string substring = "";
//         int n = s.size();
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = i; j < n; j++)
//             {
//                 substring = s.substr(i, j - i + 1);
//                 if (isPalindrome(substring))
//                 {
//                     count++;
//                 };
//             }
//         }
//         return count;
//     }
// };



// expand Around Method

class Solution {
public:
int expandAroundIndex(string s,int i,int j){
    int count = 0;
    while(i>=0&&j<s.length()&&s[i]==s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}
    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();
        for(int i=0;i<n;i++){
            int oddkaAns = expandAroundIndex(s,i,i);
            count = count + oddkaAns;
            int evenkaAns = expandAroundIndex(s,i,i+1);
            count = count+evenkaAns;
        }
        return count;

    }
};