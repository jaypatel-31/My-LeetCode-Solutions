//Problem Number - 2100
//Problem Name - Find Good Days to Rob the Bank


class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        vector<int>  res;
        int n = security.size();
        vector<int> pre(n,0),suf(n,0);
        int cnt = 0;
        
        for(int i=1;i<n;i++){
            if(security[i-1]>=security[i]){
                cnt++;
                pre[i]=cnt;
            } 
            else{
                cnt = 0;
            }
        }
        
        cnt=0;
        
        for(int i=n-2;i>=0;i--){
            if(security[i]<=security[i+1]){
                cnt++;
                suf[i]=cnt;
            } 
            else{
                cnt = 0;
            }
       }
        
        for(int i=0;i<n;i++){
            if(pre[i]>=time && suf[i]>=time) res.push_back(i);
        }
        
        return res;
    }
};
