//Problem Number - 997
//Problem Name - Find the Town Judge

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> odeg(N + 1, 0);
        int size = trust.size();
        for(int i=0;i<size;i++){
            odeg[trust[i][0]]--;
            odeg[trust[i][1]]++;
        }
        for(int i = 1;i <= N;i++){
            if(odeg[i] == N - 1)
                return i;
        }
        return -1;
    }
};
