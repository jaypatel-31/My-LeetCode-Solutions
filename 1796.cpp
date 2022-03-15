// 1796. Second Largest Digit in a String
class Solution {
public:
    int secondHighest(string s) {
        int a[10] = {0};
        for(char c : s){
            if(c>='0' && c<='9'){
                a[c-'0']++;
            }
        }
        bool fi = false;
        for(int i=9;i>=0;i--){
            if(fi && a[i]>0){
                return i;
            }
            if(a[i]>0){
                fi=true;
            }
        }
        return -1;
    }
};
