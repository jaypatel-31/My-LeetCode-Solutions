// 605. Can Place Flowers
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int c=0,nn=flowerbed.size();
        if(n==1 && nn == 1 && flowerbed[0] == 0) return true;
        if(nn>1){
            
            if(flowerbed[0]==0  && flowerbed[1]==0 ){
                flowerbed[0]=1;
                cout<<"c1 = "<<c<<endl;
                c++;
            }
       
            if(flowerbed[nn-1]==0  && flowerbed[nn-2]==0 ){
                flowerbed[nn-1]=1;
               c++;
            }
        }
        for(int i=1;i<nn-1;i++){
           if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] == 0 ){
               flowerbed[i]=1;
               c++;
           } 
        }
        return c>=n;
    }
};
