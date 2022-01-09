//Problem Number - 845
//Problem Name - Longest Mountain in Array


class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        int ans = 0;
        
        int start = 1;
        while(start<n){
            
            int inc=0,dec=0;
            
            while(start < n && arr[start-1]<arr[start]) {
                start++;
                inc++;
            }
            while(start < n && arr[start-1]>arr[start]) {
                start++;
                dec++;
            }
            
            if(inc>0  && dec>0){
                ans=max(ans,inc+dec+1);
            }
            
            while(start<n  && arr[start-1] == arr[start]) start++;
            
        }
        
        
        return ans;
        
        
    }
};
