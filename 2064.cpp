//2064. Minimized Maximum of Products Distributed to Any Store

class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quantities) {
       int low = 1,high = 100000;
        while(low<high){
            int mid = (low+high)/2;
            int s = 0;
            for(int e : quantities){
                s = s + (e + mid - 1)/mid;
            }
            if(s > n) low = mid + 1;
            else high = mid;
        }
        
        return low;
    }
};
