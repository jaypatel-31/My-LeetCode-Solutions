// 1945. Sum of Digits of String After Convert
class Solution {
public:
    int getLucky(string s, int k) {
        int a[30]={0};
        for(int i=0;i<26;i++){
            int n = i+1;
            while(n){
                a[i] = a[i] + n%10;
                n = n/10;
            }
        }
        int ans = 0;
        for(char c:s){
            ans = ans + a[c-'a'];
        }
        k--;
        while(k--){
            int r = ans;
            ans = 0;
            while(r){
                ans = ans + (r%10);
                r = r / 10;
            }
            
            
        }
        return ans;
    }
};
