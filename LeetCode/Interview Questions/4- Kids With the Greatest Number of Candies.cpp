#include <bits/stdc++.h>
using namespace std;
typedef long long int ll_int;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> out (candies.size(),0);
        int greatest=0;
        for(auto x : candies){
            if(greatest < x) greatest = x; 
        }

        for(int x=0; x<candies.size(); x++){
            if(greatest <= candies[x]+extraCandies) out[x]=1;
        }
        return out;

    }
};

int main(){
    Solution w;
}