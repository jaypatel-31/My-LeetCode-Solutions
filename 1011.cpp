// 1011. Capacity To Ship Packages Within D Days
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        long long int tsum = accumulate(weights.begin(),weights.end(),0);
        long long int low  =*max_element(weights.begin(),weights.end());
        long long int high = tsum,ans = 0;
        
        
        while(low<=high){
            
            int m = low+(high-low)/2;
            int cnt=1,sum=0;
            for(int i=0;i<n;i++){
                sum = sum + weights[i];
                if(sum > m){
                    cnt++;
                    sum = weights[i];
                }
            }
                if(cnt <= days ) {
                     ans = m;
                     high = m-1;
                }
                else{
                    low = m+1;
                } 
       }
        
        return ans;
        
    }
};
