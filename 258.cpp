// 258. Add Digits
class Solution {
public:
    int addDigits(int num) {
        while(num>9){
            int temp = 0;
            while(num){
                temp=temp+(num%10);
                num=num/10;
            }
            num=temp;
        }
        return num;
    }
};
