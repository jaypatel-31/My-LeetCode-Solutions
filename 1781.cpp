// 1781. Sum of Beauty of All Substrings
class Solution {
public:
    int beautySum(string s) {
        int n = s.size();
        int ans = 0;
        int pre[505][26]={0};
        for(int i=0;i<n;i++){
            
            for(int j=0;j<26;j++){
                pre[i][j]=0;
            }
            
        }
        for(int i=0;i<n;i++){
            
            for(int j=0;j<26;j++){
                if(i>0) pre[i][j]=pre[i-1][j];
            }
            pre[i][s[i]-'a']++;
            // for(int j=0;j<26;j++){
            //     cout<<"i = "<<i<<"  j = "<<j<<"   "<<pre[i][j]<<endl;
            // }
        }
        for(int size=1;size<=n;size++){
            
            for(int i=0;i+size-1<n;i++){
                int a[26]={0};
                for(int j=0;j<26;j++){
                    a[j]=pre[i+size-1][j];
                    if(i>0) a[j]=a[j]-pre[i-1][j];
                }
                int ma=0,mi=INT_MAX;
                for(int j=0;j<26;j++){
                    ma=max(ma,a[j]);
                    if(a[j]>0) mi=min(mi,a[j]);
                }
                if(mi == INT_MAX) mi = 1;
                //cout<<"start = "<<i<<"  end = "<<i+size-1<<" ma = "<<ma<<"  mi = "<<mi<<endl;
                ans = ans + ma - mi;
                
            }
            
        }
        
        return ans;
        
    }
};
