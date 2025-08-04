
class Solution {
public:

    int findMinDifference(vector<string>& timePoints) {
        int hour = 0 ;
        int minute = 0 ;
        int totalMinutes = 0;
        vector<int> minutes;
       
         
        
        for(int i = 0 ;i<timePoints.size();i++){
            hour = stoi(timePoints[i].substr(0,2));
            minute = stoi(timePoints[i].substr(3,2));
            totalMinutes = (hour*60)+minute;
            minutes.push_back(totalMinutes);
        }
        sort(minutes.begin(),minutes.end());
        int minimum = INT_MAX;
            for(int i = 0;i<minutes.size()-1;i++){
                    minimum = min(minimum,minutes[i+1]-minutes[i]);
            }
            //mid noon case
            int wraparound = 1440 - minutes[minutes.size()-1] + minutes[0] ;
            int mostmin = min(wraparound,minimum);

return mostmin;
        
    }
};