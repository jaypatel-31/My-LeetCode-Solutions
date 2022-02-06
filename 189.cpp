// 189. Rotate Array
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        
        k=k%n;
        
        vector<int> temp;
        for(int i=0;i<k;i++){
            int a=nums[n-k+i];
            temp.push_back(a);
        }
        for(int i=0;i<n-k;i++){
            int a=nums[i];
            temp.push_back(a);
        }
        for(int i=0;i<n;i++){
            nums[i]=temp[i];
        }
        
    }
};
