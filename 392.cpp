// 392. Is Subsequence
class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int start=-1;
        
        int m=s.length();
        int n=t.length();
        
        if(m>n) return false;
        
        int cnt=0;
        
        for(int i=0;i<m;i++){
            bool q=false;
            for(int j=start+1;j<n;j++){
                 if((s[i]==t[j] )  &&   (q==false)){
                    start=j;
                    q=true;
                    cnt++;
                }
                if(!q  && j==n-1) return false;
            }
        }
        
        if(cnt!=m) return false;
        
        return true;
        
        
        
    }
};
