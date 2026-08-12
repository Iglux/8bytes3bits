#include <bits/stdc++.h>
using namespace std;
typedef long long int ll_int;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=INT32_MIN,
        votes=0;
        for(auto x: nums){
            if(votes == 0) candidate = x;
            if(candidate == x) votes++;
            else votes--;
        }

        return candidate;
    }
};

int main(){
    Solution w;
}