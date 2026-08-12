#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    int t;
    cin >> t;
    while(t--){
        ll n, k, p, q;
        cin >> n >> k >> p>> q;
        vector<vector<ll>> prefix_mods(3, vector<ll> (n+1));
        vector<ll> mod_dif (n);

        ll aux,aux2,aux3;
        prefix_mods[0][0] = 0;
        prefix_mods[1][0] = 0;
        prefix_mods[2][0] = 0;
        
        for(int i = 0; i < n; i++){
            cin >> aux;
            aux2 = (aux%p);
            aux3 = (aux%q)%p;
            prefix_mods[0][i+1] = prefix_mods[0][i]+aux2;
            prefix_mods[1][i+1] = prefix_mods[1][i]+aux3;
            mod_dif[i] = aux2 - aux3;

        if(mod_dif[i]>0) prefix_mods[2][i+1] = prefix_mods[2][i]+aux3;
        else prefix_mods[2][i+1] = prefix_mods[2][i]+aux2;

        }
         ll melhor_soma = 1e15+7, dif_sum = 0;
         bool paridade = 0;

         for(int i=0; i<k; i++){
            dif_sum+=mod_dif[i];
         }

         ll soma_atual;
         for(int i=0; i<=n-k+1; i++){
            soma_atual = 0;
            if(dif_sum > 0) paridade = 1; //q menor
            else paridade = 0;

            if(paridade) soma_atual+=prefix_mods[1][i+k] - prefix_mods[1][i];
            else soma_atual+=prefix_mods[0][i+k] - prefix_mods[0][i];
            soma_atual+= (prefix_mods[2][n] - prefix_mods[2][i+k]) + (prefix_mods[2][i]);

            

            if(i+k < mod_dif.size()) dif_sum = dif_sum - mod_dif[i] + mod_dif[i+k];
            melhor_soma = min(melhor_soma,soma_atual);
         }
     cout<<melhor_soma<<'\n';
    }
}