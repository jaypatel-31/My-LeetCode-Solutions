// 78. Subsets
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        unsigned int tot = pow(2, n);
        int count, j;
 
        for(count = 0; count < tot; count++)
        {
            vector<int > t;
            for(j = 0; j < n; j++)
            {
                if(count & (1 << j))
                    t.push_back(nums[j]);
            }
            ans.push_back(t);
          
        }
   
        return ans;
        
        
    }
};
