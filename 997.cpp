//Problem Number - 1009
//Problem Name -Complement of Base 10 Integer

int bitwiseComplement(int n) {
        if(n == 0)  return 1;
        long long int p2 = 1;
        while(p2 <= n){
            p2 = p2 * 2;
        }
        //cout<<n<<"  "<<p2<<endl;
        return p2-1-n;
    }
