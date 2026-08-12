#include <bits/stdc++.h>
using namespace std;
typedef long long int ll_int;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size()==1){
            if(flowerbed[0]==0) n--;
            
            if(n<=0) return true;
            else return false;
        }

        else{
            for(int x=0 ; x<flowerbed.size(); x++){

            if(x == 0){
                if(flowerbed[x]==0 && flowerbed[x+1]==0) n--, flowerbed[x]=1;
            }

            else if(x == flowerbed.size()-1){
                if(flowerbed[x]==0 && flowerbed[x-1]==0) n--, flowerbed[x]=1;
            }

            else if(flowerbed[x] == 0 ){
                if(flowerbed[x-1]==0 && flowerbed[x+1]==0){
                    n--;
                    flowerbed[x]=1;
                } 
            }
            if(n<=0) return true;
        }
        return false;
        }

    }
};

int main(){
    Solution w;
}