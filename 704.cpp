// 704. Binary Search
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l=0,h=n-1;
        if(n==1 && nums[0] == target) return 0;
        while(l<=h){
            int m = (l+h)/2;
            //cout<<"#1  "<<l<<" "<<m<<" "<<h<<endl;
            if(nums[m] == target) return m;
            else if(nums[m]>target) h=m-1;
            else l=m+1;
            //cout<<"#2  "<<l<<" "<<m<<" "<<h<<endl;
        }
        return -1;
    }
};
