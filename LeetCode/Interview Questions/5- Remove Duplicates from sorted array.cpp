#include <bits/stdc++.h>
using namespace std;
typedef long long int ll_int;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int oneptr=0,
        uniq=-101,
        numele=0;

        for(int x=0; x<nums.size(); x++){
            if(uniq != nums[x]){
                uniq = nums[x];
                nums[oneptr++]= nums[x];
                numele++;
            }
            else{
                x++;
                while(x<nums.size()){
                    if(nums[x] != uniq){
                        break;
                    }
                    x++;
                }
                x--;
            }
        }
        return numele;
    }
};

int main(){
    Solution w;
}