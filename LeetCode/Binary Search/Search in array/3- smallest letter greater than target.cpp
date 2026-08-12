#include <bits/stdc++.h>
using namespace std;
typedef long long int ll_int;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        //if r<l out = menor que l
        //else out = maior r
        int l=0,
        r=letters.size()-1,
        mid=0;

        while(l<=r){
            mid= (r+l)/2;

            (target < letters[mid])? r = mid-1 : l = mid+1;
        }

        return letters[l%letters.size()];
    }
};

int main(){
    Solution w;
}