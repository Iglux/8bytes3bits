#include<bits/stdc++.h>


using namespace std;

vector<pair<int, int>> dp;
vector<int> ordem;
vector<pair<int, int>>  posi;
pair<int, int> rec(int ind){
    if(ind >= ordem.size()){
        return {0, 0};
    }
    if(dp.at(ind).first != -1 && dp.at(ind).second != -1 ){
        return dp.at(ind);
    }
    int k = ordem.at(ind);
    pair<int, int> primeiro, segundo;
    if(posi.at(k-1).first == ind ){
       primeiro = rec(posi.at(k-1).second+1);
       primeiro.first++;
       primeiro.second+=(posi.at(k-1).second - posi.at(k-1).first);

    }
          segundo = rec(ind+1);
   if(primeiro.first > segundo.first){
        dp.at(ind) = primeiro;
        return primeiro;
    }
    else if(primeiro.first == segundo.first){
        if(primeiro.second <= segundo.second){
            dp.at(ind) = primeiro;
            return primeiro;
        }
        else {
            dp.at(ind) = segundo;
            return segundo;
        }
    }
    else {
        dp.at(ind) = segundo;
        return segundo;
    }
}


int main(){
   int k;
   cin >> k;
   ordem.resize(2*k);
   posi.resize(k, {-1, -1});
dp.resize(2*k, {-1, -1});
for(int i = 0; i < 2*k; i++){
    int a;
    cin >> a;
    ordem[i] = a;
    if(posi[a-1].first == -1){
        posi[a-1].first = i;
    }
    else posi[a-1].second = i;
}
pair<int, int> saida = rec(0);
cout << saida.first <<" " <<  saida.second << "\n";
}