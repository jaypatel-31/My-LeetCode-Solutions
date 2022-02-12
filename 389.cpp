// 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        string ans = "abcdefghijklmnopqrstuvwxyz";
        int a[26]={0};
        for(auto c  : t){
            a[c-'a']++;
        }
        for(auto c  : s){
            a[c-'a']--;
        }
        for(int i=0;i<26;i++){
            if(a[i]>0) return ans[i];
        }
        return 'a';
    }
};
