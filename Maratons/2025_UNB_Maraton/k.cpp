#include <bits/stdc++.h>
#define int long long
using namespace std;



signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, q;
    cin>>n>>q;
    vector<int> list(n);
    for(int i = 0 ; i<n ; i++){
        cin>>list[i];
    }
    sort(list.begin(),list.end());

    for(int i = 0; i<q; i++){
        int a,b;
        cin>>a>>b;
        auto l = lower_bound(list.begin(),list.end(),a);
        auto r = upper_bound(list.begin(),list.end(),b);

        cout<<r-l<<'\n';
    }  

}