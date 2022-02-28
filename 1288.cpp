// 1288. Remove Covered Intervals
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin() , intervals.end());
        int n = intervals.size();
        int start=-1,end=-1,ans=0;
        for(int i=0;i<n;i++){
            
            if (intervals[i][0] > start && intervals[i][1] > end) {
                start = intervals[i][0];
                ans++;
            }
            end = max(end, intervals[i][1]);
        }
        

        return ans;
    }
};
