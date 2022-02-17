// 1304. Find N Unique Integers Sum up to Zero
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans;
        int t = n/2;
        int l=-1,r=1;
        while(t--){
            ans.push_back(l);
            l--;
            ans.push_back(r);
            r++;
        }
        if(n&1) ans.push_back(0);
        return ans;
    }
};
