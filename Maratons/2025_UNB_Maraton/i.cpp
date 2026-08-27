#include <bits/stdc++.h>
#define int long long
using namespace std;



signed main(){
    vector<pair<int, int>> directions = {
        {-1, -1}, {-1, 0}, {-1, 1},
        {0, -1}, {0, 1}, 
        {1, -1},{1, 0}, {1,1}};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<string> strs(m);
    vector<pair<int, int>> v_positions;
    for(int i = 0; i < m; i++){
        cin >> strs[i];
        for(int j = 0; j <strs[i].size(); j++){
            if(strs[i][j] == 'v' || strs[i][j] == 'V'){
                v_positions.push_back({i, j});
            }
        }
    }
    
    long long count = 0;
    for(pair<int, int> V : v_positions){
        for(auto direction : directions){
            if(V.first-abs(direction.first) < 0 ||
             V.second - abs(direction.second) < 0 ||
              V.first + abs(direction.first) >= m ||
               V.second + abs(direction.second) >= n) continue;

            if(tolower(strs[V.first+direction.first]
                [V.second+direction.second]) == 'u' && 
            tolower(strs[V.first-direction.first][V.second-direction.second]) == 'a'){
                count++;
            }
        }
    }
    cout << count << '\n';

}