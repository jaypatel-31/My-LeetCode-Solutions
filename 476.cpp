//Problem Number - 476
//Problem Name -Number Complement

class Solution {
public:
    int findComplement(int num) {
           long long p2 = 1;
           while(p2<=num) {
               p2 = p2 * 2;
           }
           p2--;
           return p2 ^ num;
    }
};
