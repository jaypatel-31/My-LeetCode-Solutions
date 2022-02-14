// 202. Happy Number
class Solution {
public:
    bool isHappy(int n) {
       long long  int t=0;
        while(n!=1){
            long long int s = 0;
            while(n){
                int a = n%10;
                s = s + a*a;
                n = n/10;
                
            }
            n = s;
            t++;
            if(t>100) return false;
            
            
        }
        
        
        return true;
    }
};
