//method 1 
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.find(needle)!=string::npos){
            int index = haystack.find(needle);
            return index;
        }else{
            return -1;
        }
        
    }
};
//method 2 (if builtIN function use is prohibited
class Solution {
public:
    int strStr(string haystack, string needle) {
        int index = -1;
        int needleMatchCount;
        int n = haystack.size();
        int m = needle.size();
        for(int i = 0 ; i<=n-m;i++){
            needleMatchCount = 0;
            for(int j = 0 ;j < m;j++){
                if(needle[j] != haystack[i+j]){
                        break;
                }
               needleMatchCount++;
            }
             if(needleMatchCount == m){
                    index = i;
                    return index;
                }

        }
        return -1;
    }
};)