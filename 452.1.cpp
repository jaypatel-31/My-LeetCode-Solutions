//Problem Number - 452
//Problem Name - Minimum Number of Arrows to Burst Balloons

class Solution {
public:
       static bool cmp(pair<int,int> &a , pair<int,int> &b){
            return a.second<b.second;
        }
    int findMinArrowShots(vector<vector<int>>& points) {
        
        vector<pair<int,int>> v;
        int n = points.size();
        for(int i=0;i<n;i++){
            v.push_back({points[i][0],points[i][1]});
        }
        
        sort(v.begin(),v.end(),cmp);
        // for(int i=0;i<n;i++){
        //     cout<<v[i].first<<"  "<<v[i].second<<endl;
        //     //v.push_back({,});
        // }
        int arr=v[0].second;
        int cnt = 1;
        for(int i=1;i<n;i++){
            if(v[i].first>arr){
                arr=v[i].second;
                cnt++;
            }
            //cout<<"cnt "<<cnt<<endl;
        }
        
        return cnt;
        
        
    }
};
