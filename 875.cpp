//875. Koko Eating Bananas

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low=1,high=1000000000;
        while(low<high){
            int mid=low+(high-low)/2;
            int sum=0;
            for(int i=0;i<n;i++){
                sum += (piles[i]+mid-1)/mid;
            }
            if (sum > h)
                low = mid + 1;
            else
                high = mid;
            
        }
        return low;
    }
};
