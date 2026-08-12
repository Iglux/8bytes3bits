#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

class Solution {
public:

    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        map<int,int> start_index;
        vector<int> result(intervals.size());
        for(ll i=0; i<intervals.size(); i++ )
        start_index.emplace(intervals[i][0],i);

        for(ll i=0; i<intervals.size(); i++ ){
            auto itr = start_index.lower_bound(intervals[i][1]);
            if(itr == start_index.end()) result[i] = -1;
            else result[i] = itr->second;
        }
        return result;
    }
};

int main(){
    Solution w;
    vector<vector<int>> intervals = {{3,4},{2,3},{1,2}};
    vector<int> v = w.findRightInterval(intervals);
    for(auto x : v) cout<<x<<endl;
}