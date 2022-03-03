// 931. Minimum Falling Path Sum
class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int n = matrix .size();
        int ans = INT_MAX;
        int dp[105][105];
         for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
                 dp[i][j]=0;
             }
         }
         for(int i=0;i<n;i++){
             //ans = min(ans , matrix[0][i] ) ; 
             dp[0][i]=matrix[0][i];
         }
         for(int i=1;i<n;i++){
             for(int j=0;j<n;j++){
                 dp[i][j]=matrix[i][j]+dp[i-1][j];
                 if(j>0) dp[i][j]=min(dp[i][j] , matrix[i][j]+dp[i-1][j-1]);
                 if(j+1<n) dp[i][j]=min(dp[i][j] , matrix[i][j]+dp[i-1][j+1]);
             }
         }
         for(int i=0;i<n;i++){
             ans = min(ans , dp[n-1][i] ) ; 
         }
        // for(int i=0;i<n;i++){
        //      for(int j=0;j<n;j++){
        //          cout<<dp[i][j]<<" ";
        //      }
        //      cout<<endl;
        //  }
          return ans;
    }
};
