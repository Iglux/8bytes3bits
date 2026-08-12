

#include <bits/stdc++.h>

#define ENDL '\n'
#define int long long 
#define fi(n) for(int i = 0; i < n; i++)
#define fj(m) for(int j = 0; j < m; j++)
#define fj1(n) for(int j = 1; j < n; j++)
#define fj2(n) for(int j = 1; j <= n; j++)
#define fk(n) for(int k = 0; k < n; k++)

#define wi(t) while(t--)
#define fa(v) for(auto t : v)

#define ci(n) cin >> n
#define co(n) cout << n 

#define vi vector<int>  
#define vvi vector<vector<int>>  

using namespace std;

signed main() 
{
    int n,a,b;
    ci(n>>a>>b);
    vector<bool> ingredients(a,false);
    fi(b){
        int aux;
        ci(aux);
        ingredients[aux-1] = true;
    }

    int flag = -1;

    fi(n){
        int m; ci(m);
        int max = m/3, cont = 0; 
        fj(m){
            int aux; ci(aux);
            if(ingredients[aux-1]) cont++;
        }
        if(max < cont){
            flag = i+1;
            break;
        }
    }

    co(flag<<ENDL);

}