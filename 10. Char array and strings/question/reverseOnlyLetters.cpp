class Solution {
public:
    string reverseOnlyLetters(string &s) {
        int left = 0;
        int right = s.size()-1;

        while(left<right){
           

            bool isleftch = isalpha(s[left]);
            bool isrightch = isalpha(s[right]);
            if(isleftch && isrightch){
                swap(s[left],s[right]);
                left++;
                right--;
            }else if (!isrightch){
                right--;
            }else if (!isleftch){
                left++;
            }else{
                  left++;
                right--;
            }
        }
        return s;
    }
};