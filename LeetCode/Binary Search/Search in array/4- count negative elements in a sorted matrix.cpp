#include <bits/stdc++.h>
using namespace std;
typedef long long int ll_int;

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int negative=0,
        m= grid.size(),
        n= grid[0].size();

        for(int i=0; i<m; i++)
        {//n - 0
            int up=0,down=n-1,mid=0,firstneg=n;
            while(up<=down){
                mid= (up+down)/2;
                if(grid[i][mid] < 0){
                    firstneg = mid;
                    down = mid-1;
                }
                else up = mid+1;
            }
            negative+= n - firstneg;
            
        }
        return negative;
    }
};

int main(){
    Solution w;
}
