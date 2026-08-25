#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, b;
    int Mary = 0, John = 0;
    cin >> n >> a >> b;
    vector<int> cartas(14, 4);
    cartas[a]--;
    cartas[b]--;
    a = min(10, a);
    b = min(10, b);    
    John+=a+b;
    cin >> a >> b;
    cartas[a]--;
    cartas[b]--;
    a = min(10, a);
    b = min(10, b);
    Mary+=a+b;
    for(int i = 0; i < n;i++){
        cin >> a;
        cartas[a]--;
        a = min(10, a);
        John+=a;
        Mary+=a;
    }
    if(Mary>=John){
        return 0;
    }
    int card = 24 - John;
    if(cartas[card] == 0){
        for(int i = card; i < 14 && i + Mary < 24; i++){
            if(cartas[card] > 0){
                card = i;
                break;
            }
        }

    }
    else cout << 24 - John << "\n";
}