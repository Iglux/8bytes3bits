#include <bits/stdc++.h>
#define int long long
using namespace std;



signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b;
    cin>>a>>b;
    if((a*b) % 2){
        cout<<'W';
    }
    else cout<<'P';
    cout<<'\n';
}