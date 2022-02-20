// 402. Remove K Digits
class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans = "";                                         
        int n = num.size();
        for(int i=0;i<n;i++){
            while (ans.size()>0 && ans.back() > num[i] && k) {
               ans.pop_back();                                  
               k--;                                             
            }
           
            if (ans.size()>0 || num[i] != '0') { ans.push_back(num[i]); }  
        }

       while (ans.length() && k--) { ans.pop_back(); }          
       
       return ans.empty() ? "0" : ans;
    }
};
