#include <bits/stdc++.h>
using namespace std;
typedef long long int ll_int;

int removeElement(vector<int>& nums, int val) {
        int xptr=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != val){
                nums[xptr++] = nums[i];
            }
        }
        return xptr;
    }

int main(){
    vector<int> um = {0,1,2,2,3,0,4,2};
    removeElement(um,2);
    for(auto x:um) cout<<x<<' ';
    return 0;
}