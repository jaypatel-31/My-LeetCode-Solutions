// 290. Word Pattern


class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string a = "";
        string b = "";
        string g1 = "";
        string g2 = "";
        int m = pattern.size();
        int n = s.size();
        map<char , int > mp1;
        map<string , int> mp2;
        int cnt1=0,cnt2=0;
        for(int i=0;i<m;i++){
            if(mp1[pattern[i]] != 0) g1=g1+to_string(mp1[pattern[i]]);
            else {
                cnt1++;
                mp1[pattern[i]] = cnt1;
                g1=g1+to_string(mp1[pattern[i]]);
            }
        }
        
        for(int i=0;i<n;i++){
            
            if(isspace(s[i])){
                if(mp2[b]!=0) g2=g2+to_string(mp2[b]);
                else{
                    cnt2++;
                    mp2[b] = cnt2;
                    g2=g2+to_string(mp2[b]);
                }
                b = "";
            } 
            else b = b + s[i];
            
        }
        if(mp2[b]!=0) g2=g2+to_string(mp2[b]);
        else{
                    cnt2++;
                    mp2[b] = cnt2;
                    g2=g2+to_string(mp2[b]);
         }
        cout<<g1<<"  "<<g2<<endl;
        return g1 == g2;
        
    }
};
