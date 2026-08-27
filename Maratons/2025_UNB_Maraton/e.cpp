#include <bits/stdc++.h>
#define int long long
using namespace std;



signed main(){
    int q;
    cin >> q;
    int qtdpilhas = 0;
    vector<vector<int>> pilhas(q+1, vector<int>(q+1));
    for(int ptr = 0; ptr < q; ptr++){
        int n;
        cin >> n;
        if (n==1){
            qtdpilhas++;
        }
        else if(n == 2){
            int i, x;
            cin >> i >> x;
            pilhas[i][q]++;
            pilhas[i][pilhas[i][q]] = x;
        }
        else{
            int i, j;
            cin >> i >> j;
            cout << pilhas[i][j] << '\n';
        }
    }
}