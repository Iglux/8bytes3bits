#include <bits/stdc++.h>
using namespace std;
typedef long long int ll_int;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //if r<l out = menor que l
        //else out = maior r
        int l=0,
        r=nums.size()-1,
        mid=0,
        newele =-1;

        while(l<=r){
            mid= (r+l)/2;
            if(target == nums[mid]) return mid;

            (target < nums[mid])? r = mid-1 : l = mid+1;
        }

        return l;
    }
};

int main(){
    Solution w;
}