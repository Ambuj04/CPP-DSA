#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
string calc_Sum(vector<int>& arr1, vector<int>& arr2) {
        // Complete the function
        int carry = 0;
        
        string ans;
        int i = arr1.size()-1;
        int j = arr2.size()-1;
        
        while (i>=0 && j>=0)
        {
       
            
            int sum = arr1[i]+arr2[j] + carry;    
            
            int digit = sum%10 + '0';
            ans.push_back(digit);
            carry = sum/10;
            i--;
            j--;
            
            
        }
        while (i>=0)
        {
            int sum = arr1[i]+ 0 + carry;    
            
            int digit = sum%10 + '0';
            ans.push_back(digit);
            carry = sum/10;
            i--;
            
            
        }
        
        while (j>=0)
        {
           
            
            int sum = arr2[j]+ 0 + carry;    

           int digit = sum%10 + '0';
           ans.push_back(digit);
           carry = sum/10;
           j--;
       
        }
        
        if(carry){
           
            ans.push_back(carry+'0');
        }
        
        while (ans[ans.size()-1]== '0')
{
    ans.pop_back();
}
reverse(ans.begin(),ans.end());
        return ans;
    }

    int main(){
        vector<int>arr1{5,5,5,5};
        vector<int>arr2{5,5,5,5};

        string ans = calc_Sum(arr1,arr2);
        cout<<ans;



        return 0;
    }