// 413. Arithmetic Slices
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return 0;
        bool fl = true;
        int cd = 0 , pd = nums[1]-nums[0];
        int ans = 0 , size = 2;
        for(int i=2;i<n;i++){
            int cd = nums[i]-nums[i-1];
            if(cd == pd){
                size++;
                fl=true;
            } 
            else{
                int t = (size-2);
                ans = ans + (t*(t+1))/2;
                size=2;
                fl = false;
            }
            pd = cd;
        }
        if(fl == true){
               int t = (size-2);
                ans = ans + (t*(t+1))/2;
        }
        return ans;
    }
};
