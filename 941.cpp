// 941. Valid Mountain Array
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
       int n=arr.size();
       
        if(n<3) return false;
       
        int top=0,in=0,d=0;
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1]){
                in=1;
                top=i+1;
            }
            else{
                break;
            }
        }
        
        if(top==0  ||  top==n-1) return false;
      
        
        for(int i=top;i<n-1;i++){
            if(arr[i]<=arr[i+1]){
                return false;
            }
        }
        
        return true;
        
    }
};
