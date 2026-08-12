#include <bits/stdc++.h>
using namespace std;
typedef long long int ll_int;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1,mid=0; //r (mid>= target) no final da iteração: maior elemento antes do tsrget
        vector<int> range (2,-1);

        while(l<=r)
        {
            mid = (r+l)/2;
            (nums[mid] < target)? l = mid+1 : r= mid-1;
        }

        for(int x= r+1; x<nums.size(); x++){
            if(nums[x] == target){
                if(r+1 == x) range[0] = x;
                range[1]=x;
            }
            else break;
        }
        return range;
    }
};

int main(){
    Solution w;
    vector<int> nums, output;
    output = w.searchRange(nums,6);
    for(auto x: output) cout<<x<<endl;
}