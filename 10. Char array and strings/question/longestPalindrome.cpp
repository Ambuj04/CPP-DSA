class Solution {
public:

void expandAroundCenter(string s,int i,int j,int &start,int &maxlen){
    while(i>=0 && j < s.size() && s[i] == s[j]){
        int newlen = j-i+1;
        if(newlen > maxlen){
            maxlen = newlen;
            start = i;
        }
        i--;
        j++;


    }
}

    string longestPalindrome(string s) {
        int n = s.size();
        if(n == 0) return "";
        int start = 0;
        int maxlen = 1;
        for(int i = 0;i<n;i++){
            //odd Ka Ans
             expandAroundCenter(s,i,i,start,maxlen);
            //even ka Ans
            expandAroundCenter(s,i,i+1,start,maxlen);
        }
        return s.substr(start,maxlen);
        
    }
};