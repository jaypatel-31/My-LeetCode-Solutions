//Problem Number - 452
//Problem Name - Minimum Number of Arrows to Burst Balloons

class Solution {
public:
       static bool cmp( vector<int>& i1,  vector<int>& i2){
            return i1[1] < i2[1];
        }
    
    int findMinArrowShots(vector<vector<int>>& points) {
        
        int n = points.size();
        
        sort(points.begin(),points.end(),cmp);
        
        int arr = points[0][1];
        int cnt = 1;
        for(int i=1;i<n;i++){
            if(points[i][0]>arr){
                arr=points[i][1];
                cnt++;
            }
        }
        
        return cnt;
        
        
    }
};
