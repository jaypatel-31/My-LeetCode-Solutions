// 1046. Last Stone Weight
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while(stones.size()>1){
            
            int n = stones.size();
            sort(stones.begin(),stones.end());
            if(stones[n-1]==stones[n-2]){
                vector<int>::iterator it1,it2;
                it1 = stones.begin();
                it2 = stones.end();
                stones.erase(it1+n-2, it2);
            }
            else{
                int d = stones[n-1]-stones[n-2];
                vector<int>::iterator it1,it2;
                it1 = stones.begin();
                it2 = stones.end();
                stones.erase(it1+n-2, it2);
                stones.push_back(d);
            }
            
            
        }
        
        return stones.size() == 0 ? 0 : stones[0]; 
    }
};
