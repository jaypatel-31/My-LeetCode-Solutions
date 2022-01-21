//1481. Least Number of Unique Integers after K Removals

class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int> mp;
        
        for(int a : arr){
            mp[a]++;
        }
        
        vector<pair<int,int>> v;
        
        for(auto a : mp){
            v.push_back({a.second , a.first});
        }
        
        sort(v.begin(),v.end());
        
        int n = v.size();
        
        int i = 0;
        
        while(i<n && v[i].first <= k  &&  k>0){
            k = k - v[i].first;
            i++;
        }
        
        return n - i;
        
        
        
    }
};
