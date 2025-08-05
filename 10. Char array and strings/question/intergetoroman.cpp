class Solution {
public:
    string intToRoman(int num) {
       int numbers[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
       string ans = "";
        string roman[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
       for(int i = 0;i<sizeof(numbers)/sizeof(int);i++){
        while(num >= numbers[i]){
            ans = ans + roman[i];
            num = num - numbers[i];
       }
        }
        return ans;
    }
};