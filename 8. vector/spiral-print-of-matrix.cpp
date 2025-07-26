#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int totalrows= matrix.size();
        int totalcols = matrix[0].size();;
        int totalelements = totalrows*totalcols;
        int startingrow = 0;
        int endingcol = totalcols-1;
        int endingrow = totalrows-1;
        int startingcol = 0;
        int count = 0;
        int elem=0 ;
        vector<int>ans;
      
       
      

        while(count < totalelements){
  
            //starting row
            for(int i=startingcol;i<=endingcol && count < totalelements;i++){
                elem = matrix[startingrow][i];
                ans.push_back(elem);
                count++;
            }
            startingrow++;

            //ending col
           for(int i=startingrow;i<=endingrow && count < totalelements;i++){
                elem = matrix[i][endingcol];
            

                ans.push_back(elem);
                count++;
            }
            endingcol--;

            //ending row
            for(int i=endingcol;i>=startingcol && count < totalelements;i--){
                elem = matrix[endingrow][i];
                ans.push_back(elem);
                count++;
            }
            endingrow--;

            //starting col
            for(int i=endingrow;i>=startingrow && count < totalelements;i--){
                elem = matrix[i][startingcol];
                ans.push_back(elem);
                count++;
                   
            }
            startingcol++;
            
        }


       
        return ans;
    }







int main(){
    
vector<vector<int>>matrix{{1,2,3,4,5},
  {6,7,8,9,10},
  {11,12,13,14,15}
};


vector<int>mainans = spiralOrder(matrix) ;
for(auto i:mainans){
    cout<<i<<" ";
}
 


  return 0;}


