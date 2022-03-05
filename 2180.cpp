// 2180. Count Integers With Even Digit Sum
class Solution {
public:
    int countEven(int num) {
        int t = num, sum = 0;
        while (t) {
            sum = sum + t % 10;
            t = t / 10;
        }
        if(sum&1) return (num-1)/2;
        else return num/2;
    }
};
