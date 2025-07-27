#include<iostream>
#include<vector>
using namespace std;

void rowwisewaveprint(vector<vector<int>> &matrix){
    int totalrows = matrix.size();
    int totalcols = matrix[0].size();
    for (int startcol = 0; startcol < totalcols; startcol++)
    {
        if(startcol%2 == 0){
            //for even col print top to down
            for (int i = 0; i < totalrows; i++)
            {
                cout<<matrix[i][startcol]<<" ";
            }

            }else{
                //for odd col print
                for (int i = totalrows-1; i >= 0; i--)
                {
                    cout<<matrix[i][startcol]<<" ";
                }
                
            }
            
     
        }
    }
    


int main(){

vector<vector<int>>matrix{
    {1,2,3},
    {4,5,6},
    {7,8,9},
    
};

rowwisewaveprint(matrix);



return 0;
}