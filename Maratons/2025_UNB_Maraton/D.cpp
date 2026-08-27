#include <bits/stdc++.h>
#define int long long
using namespace std;



signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> numbers(n);
    vector<int> dif(k);
    map<int, int> num;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        numbers.at(i) = a;
    }
    for(int i = 0; i < k; i++){
        int a;
        cin >> a;
       dif.at(i) = a;
    }
    int maxi = 0;
    int palavra = -1;
    pair<int, int> contar = {0, 0};
    for(int i = 0; i < n; i++){
        if(i%k == 0){
            cout << contar.second << " is the second one\n";
            if(contar.second == k-1){
                if(!num.contains(contar.first)) num.insert({contar.first,1});
               else num.at(contar.first)++;
                if(num.at(contar.first) > maxi){
                    maxi = num.at(contar.first);
                    palavra = contar.first;
                }
            }
            contar.first = numbers.at(i);
            contar.second = 0;
            continue;
        }
        if(numbers.at(i)-numbers.at(i-1) ==dif.at(i%k) -dif.at((i-1)%k)){
            contar.second++;
        }
    }
    cout << palavra << maxi;
}