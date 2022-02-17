// 39. Combination Sum
class Solution {
public:

    void cSum(vector<int>& candidates, int target, vector<vector<int> >& ans, vector<int>& temp, int i)
    {
        
        if(target == 0)
        {
            ans.push_back(temp);
            return;
        }
        
        while(i <  candidates.size() && target >= candidates[i] )
        {
            
            temp.push_back(candidates[i]);
            
           
            cSum(candidates,target - candidates[i],ans,temp,i);
            ++i;
            
            
            temp.pop_back();
        }
}
    
     
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end()); 
        
     
        candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end());
        
        vector<int> temp;
        vector<vector<int> > ans;
        
        cSum(candidates,target,ans,temp,0);
        
        return ans;
    }
};

