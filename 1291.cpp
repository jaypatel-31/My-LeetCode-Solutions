//1291. Sequential Digits

class Solution {
public:
    
    vector<int> sequentialDigits(int low, int high) {
        vector<int> v[10];
        for(int i=2;i<=9;i++){
            for(int j=1;j+i-1<10;j++){
                int dig = i;
                int start = j;
                int num = j;
                start++;
                dig--;
                while(dig--){
                    num = num*10 + start;
                    start++;
                }
                v[i].push_back(num);
            }
        }
        
        vector<int> ans;
        for(int i=2;i<=9;i++){
            
            for(int j=0;j<v[i].size();j++){
                
                if(v[i][j] >= low && v[i][j] <= high){
                    ans.push_back(v[i][j]);
                }
                
            }
                
        }
        
        
        return ans;
        
    }
};
