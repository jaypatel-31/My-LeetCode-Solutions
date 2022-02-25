// 740. Delete and Earn
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int dp[10005]={0};
        int cnt[10005]={0};
        for(auto a : nums){
            cnt[a]++;
        }
        dp[1]=cnt[1];
        for(int i=2;i<=10000;i++){
            
            dp[i] = max(dp[i-1],dp[i-2]+(cnt[i]*i));
            
        }
        
        return dp[10000];
        
        
    }
};
