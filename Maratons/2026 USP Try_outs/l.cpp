#include <bits/stdc++.h>
#define int long long
using namespace std;
long long fact(int n){
    if(n <=0) return 1;
    int aux = n;
    while(aux > 1){
        aux--;
        n*=aux;
    }
    return aux;
}
int escolhe(int n){
    if(n <= 1) return 0;
    return ((n*(n-1))/2);
}
signed main(){
    int n;
    cin >> n;
    map<int, int> freq;
    for(int i = 0; i < n; i++){
        int aux;
        cin >> aux;
        if(freq[aux] == 0) freq[aux] = 1;
        else freq[aux]++;
    }
    int soma =0;
    for(pair<int, int> elem : freq){
        int buceta = elem.second;
        soma+=escolhe(buceta);
    }
    cout << soma << '\n';
}