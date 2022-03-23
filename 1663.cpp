// 1663. Smallest String With A Given Numeric Value
class Solution {
public:
    string getSmallestString(int n, int k) {
         
        string s= "abcdefghijklmnopqrstuvwxyz";
        string ans(n,'a');
        k = k - n;
        int i=n-1;
        while(k>0){
            if(k>25){
                ans[i]='z';
                k = k - 25;
            }
            else{
                ans[i]=s[k];
                break;
            }
            i--;
        }
       
        
        return ans;
        
        
    }
};
