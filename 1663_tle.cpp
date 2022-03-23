// 1663. Smallest String With A Given Numeric Value
class Solution {
public:
    string getSmallestString(int n, int k) {
         
        string s= "abcdefghijklmnopqrstuvwxyz";
        string ans = "";
        int presum = 0;
        for(int i=0;i<n;i++){
            for(int j=1;j<=26;j++){
                int val1 = presum + j + (n-1-i);
                int val2 = presum + j + (n-1-i)*26;
                if(k>=val1 && k<=val2){
                    ans = ans + s[j-1];
                    presum = presum + j;
                    break;
                }
            }
        }
        
        
        return ans;
        
        
    }
};
