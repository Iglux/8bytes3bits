#include <bits/stdc++.h>
#define int long long
using namespace std;

vector<int> blocks;
vector<vector<int>> colors;



signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    blocks.resize(n+1);
    colors.resize(k+1);
    vector<int> correto;
    for(int i = 1; i <= n; i++){
        int number, color;
        cin >> number >> color;
        blocks[i] = color ;
        correto.push_back(number);
        colors[color].push_back(number);
    }
    for(int i = 1; i <= k; i++){
        sort(colors[i].rbegin(), colors[i].rend());
    }
    sort(correto.begin(), correto.end());
    bool correcto =  true;
    vector<int> final;
    for(int i = 1; i <=n; i++){
        final.push_back(colors[blocks[i]].at(colors[blocks[i]].size()-1));
        colors.at(blocks[i]).pop_back();
    }
   
    for(int i = 0; i < final.size(); i++){
        if(final.at(i) != correto.at(i)){
           correcto = false;
            break;
        }
    }
    if(correcto) cout << "Y\n";
    else cout << "N\n";
}