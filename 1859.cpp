// 1859. Sorting the Sentence


class Solution {
public:
    string sortSentence(string s) {
        int n = s.size();
        vector<string> v(n);
        int i=0,cnt=0;
        string ss="";
        while(i<n){
            if (isalpha(s[i]) != 0){
                ss = ss + s[i];
            }
            else if (isdigit(s[i]) != 0){
                v[s[i]-'1'] = ss;
                cnt++;
            }
            else{
                ss = "";
            }
            i++;
        }
        string ans = "";
        for(int i=0;i<cnt;i++){
            ans = ans + v[i];
            if(i!=cnt-1) ans = ans + " ";
        }
        return ans;
        
    }
};
