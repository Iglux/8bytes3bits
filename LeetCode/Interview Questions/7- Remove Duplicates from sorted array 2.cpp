#include <bits/stdc++.h>
using namespace std;
typedef long long int ll_int;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        for(int x=0; x< nums.size(); x++)
        {
            if(x<2 || nums[x] != nums[k-2]){
                nums[k] = nums[x];
                k++;
            }
        }
        return k;
    }
};

int main(){
    Solution w;
}