// 421. Maximum XOR of Two Numbers in an Array
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int ans = 0, mask = 0;
        for(int i = 31; i >= 0; i--){
            mask = mask | (1 << i);
            set<int> st;
            for(int num : nums){
                st.insert(num & mask);
            }
            int tmp = ans | (1 << i);
            for(int prefix : st){
                if(st.count(tmp ^ prefix)) {
                    ans = tmp;
                    break;
                }
            }
        }
        return ans;
    }
};


