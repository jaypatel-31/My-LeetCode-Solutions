// 1525. Number of Good Ways to Split a String
class Solution {
public:
    int numSplits(string s) {
        int left[26]={0};
        int right[26]={0};
        int n = s.size();
        left[s[0]-'a']++;
        for(int i=1;i<n;i++){
            right[s[i]-'a']++;
        }
        int ans = 0;
        for(int i=1;i<n;i++){
            
            int a = 0;
            int b = 0;
            for(int j=0;j<26;j++){
                
                if(left[j]>0) a++;
                if(right[j]>0) b++;
                
            }
            //cout<<i<<" "<<a<<" "<<b<<endl;
            if(a == b) ans++;
            
            left[s[i]-'a']++;
            right[s[i]-'a']--;
            
        }
        
        
        return ans;
        
    }
};
