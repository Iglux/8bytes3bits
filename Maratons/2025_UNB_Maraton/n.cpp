#include <bits/stdc++.h>
#define int long long
using namespace std;
//log2(d/3 +1)


signed main(){
    int d,y;
    cin>>d>>y;
    int max_itr = ceil(log2((d/(double) 3) + 1));

    cout<<max_itr<<"this is itr \n";
    if(max_itr%2 == 0){  
        if(y>=0){
            cout<<"Sim\n";
            cout<<y-(1<<(max_itr-1));
        }
        else{
            cout<<"Nao";
        }
    }
    else{
        if(y<=0){
            cout<<"Sim\n";
            cout<<(1<<(max_itr-1))+y;
        }
        else{
            cout<<"Nao";
        }
    }
    cout<<'\n';
}