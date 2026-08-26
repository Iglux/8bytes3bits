#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t,d,m;
    cin>>t>>d>>m;
    int first = 1 , next;
    bool flag = false, plusFlag = false;
    if(m == 0 ){
        if(t <= d) cout << "Y\n";
        else cout << "N\n";
        return 0;
    }
    cin >> next;
    if(next != 1){
        if(next - (first) >= t){
            flag  = true;
        }
    }
    first = next;
    
    for(int i = 1; i < m; i++){
        cin >> next;
        if(next - (first + 1) >= t){
            flag = true;
        }
        first = next;
         
    }
    if(d != next){
        if( (d) - next >= t){
            flag = true;
        }
    }
    
    if(flag) cout<<"Y\n";
    else cout<<"N\n";
}