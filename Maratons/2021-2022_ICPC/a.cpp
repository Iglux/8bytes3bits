#include <bits/stdc++.h>
using namespace std;

vector<int> DP;
vector<int> lista;

int recurse(int r, int n){
    if(n == lista.size()) return 1;
    else{
        long long sum = 0;
        for(int i=0; i<= r-lista[n]+1; i++){
            
        }
    }
}   

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int mod = 1e9 + 7, result = 1;
    int n,r;
    cin>>n>>r;
    DP.resize(r,-1);
    lista.resize(n);

}