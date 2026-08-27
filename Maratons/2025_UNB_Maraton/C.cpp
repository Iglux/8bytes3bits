#include <bits/stdc++.h>
#define int long long
using namespace std;



signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> numbs(k, 0);
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        numbs.at(i%k)+=a;
    }
    int maxi = -1;
    for(auto it: numbs){
        maxi = max(maxi, it);
    }
    cout << maxi;
    
}