#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        auto compar_0 = [](const auto &a, const auto &b){ return a[0] < b;};
        auto itr = lower_bound(matrix.begin(),matrix.end(),target,compar_0);
        if (itr == matrix.end() || (*itr)[0] > target)
            itr--;
        if(itr < matrix.begin()){
            return false;
        }
        else{
            auto itr2 = lower_bound(itr->begin(),itr->end(),target);
            if(itr2 == itr->end() || *itr2 != target )return false;
            else return true;
        }
        
    }
};