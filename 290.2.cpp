// 290. Word Pattern


class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        int m = pattern.size();
        int n = s.size();
       
        string g1="",g2="",b="";
        
        map<char , int > mp1;
        map<string , int> mp2;
        
        int cnt1=0,cnt2=0;
        
        for(int i=0;i<m;i++){
            if(mp1[pattern[i]] == 0){
                cnt1++;
                mp1[pattern[i]] = cnt1;
            }
            g1 = g1 + to_string(mp1[pattern[i]]);
        }
        
        for(int i=0;i<n;i++){
            
            if(isspace(s[i])){
                if(mp2[b] == 0){ 
                    cnt2++;
                    mp2[b] = cnt2;
                }
                g2 = g2 + to_string(mp2[b]);
                b = "";
            } 
            else b = b + s[i];
            
        }
        
        if(mp2[b]==0){
              cnt2++;
              mp2[b] = cnt2;
        }
        
        g2=g2+to_string(mp2[b]);
        
        return g1 == g2;
        
    }
};
