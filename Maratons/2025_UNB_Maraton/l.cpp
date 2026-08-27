#include <bits/stdc++.h>
#define int long long
using namespace std;

int gcd(int a, int b, int &x, int &y){
    if(b==0){
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a%b, x1, y1);
    x = y1;
    y = x1 - y1 * (a/b);
    return d;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y, m = 1e9 + 7;
    int g = gcd(6,m,x,y);
    x = (x%m + m)%m;
    
    int n;
    cin>>n;
    n = n%m;
    cout<<((((((n*(24 + ((8*n)%m)))%m)+22)*n)%m)*(x%m))%m<<'\n'; 

}