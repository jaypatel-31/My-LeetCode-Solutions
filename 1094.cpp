//Problem Number - 1094
//Problem Name - Car Pooling


class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        
        int positions[1005];
        int n = trips.size();
        int capacity1=capacity;
        int capacity2=capacity;
        for(int i=0;i<n;i++){
            positions[trips[i][1]] += trips[i][0];
            positions[trips[i][2]] -= trips[i][0];
        }
        for(int i=0;capacity1 >= 0 && i<1001 ; i++){
            capacity1 -= positions[i];
        }
         int stops[1001] = {};
          for (auto t : trips) {
              stops[t[1]] += t[0], stops[t[2]] -= t[0];
          }
          for (auto i = 0; capacity2 >= 0 && i < 1001; ++i){
              capacity2 -= stops[i];
          } 
         
        
          return capacity2 >= 0;
        
    }
};
