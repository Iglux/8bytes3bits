#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n,x,y, cont = 0;
    cin>>n>>x>>y;
    while(!(x%2)){
        cont++;
        x/=2;
    }
    cout<<n-1-cont<<'\n';
}