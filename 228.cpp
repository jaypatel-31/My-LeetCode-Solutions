// 228. Summary Ranges
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n = nums.size();
        vector<string> ans;
        if(n == 0) return ans;
        
        vector<int> temp ;
        vector<vector<int>> v;
        temp.push_back(nums[0]);
        
        for(int i=1;i<n;i++){
            
            if(nums[i] == (nums[i-1]+1) ){
                temp.push_back(nums[i]);
            }
            else{
                 v.push_back(temp);
                 temp = {};
                 temp.push_back(nums[i]);
           }
            
        }
        v.push_back(temp);

        
        int si = v.size();
        
        for(int i=0;i<si;i++){
            if(v[i].size()==1) ans.push_back(to_string(v[i][0]));
            else{
                string a = "";
                a = a + to_string(v[i][0]);
                a = a + "->" ;
                a = a + to_string(v[i][v[i].size()-1]);
                ans.push_back(a);
            }
        }
        
        return ans;
    }
};
