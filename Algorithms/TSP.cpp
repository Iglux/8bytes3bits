#include <bits/stdc++.h>
#define ENDL '\n'
#define ll long long 
#define fa(v) for(auto t : v)
#define ci(n) cin >> n
#define co(n) cout << n 
#define f1 first
#define f2 second
#define INF numeric_limits<double>::infinity()

using namespace std;

class v2d {
private:
    std::vector<double> data;
    size_t rows;
    size_t cols;
public:
    v2d(size_t r, size_t c, double init_data) : rows(r), cols(c), data(r * c, init_data) {}
    double& operator()(size_t r, size_t c) { //2D coordinate getter
        return data[(r * cols) + c];}

    int operator()(size_t r, size_t c) const { //2D coordinate setter
        return data[(r * cols) + c];}
    
    size_t getRows(){
        return rows;}
    size_t getColluns(){
        return cols;}

    const std::vector<double>& getFlat() const { return data; } // Access the raw flat structure directly
};

pair<double,string> solveTSP(v2d &distances){
    //returns value of shortest route and the vertex sequence of the shortest route
    size_t total_v = distances.getRows();
    v2d dp((1<<total_v), total_v, INF);

    for(size_t mask = 1; mask < (1u<<total_v); mask++){

        for(size_t new_city = 0; new_city < total_v; new_city++){
            if(!((mask >> new_city) & 1)) continue;
            
            size_t prev_mask = mask ^ (1<<new_city);
            if(prev_mask == 0){
                dp(mask, new_city) = (new_city == 0) ? 0 : INF;
            }

            for(size_t mask_city = 0; mask_city < total_v; mask_city++){
                if((mask >> mask_city) & 1){        
                    dp(mask, new_city) = 
                    min(dp(prev_mask, mask_city) + distances(mask_city,new_city),
                    dp(mask, new_city));
                }
            }

        }

    }
    size_t full_mask = (1 << total_v) - 1;
    double ans = INF;
    size_t best_index;
    for (size_t j = 1; j < total_v; j++){
        if(ans > dp(full_mask,j) + distances(j,0)){
            ans = dp(full_mask,j) + distances(j,0);
            best_index = j;
        }
    }
    
    //path reconstruction
    vector<int> path;
    int mask = full_mask;
    int cur = best_index;

    while(cur != 0 || mask != 1){   // stop when we've unwound back to the start
        path.push_back(cur);
        int prevMask = mask ^ (1 << cur);

        if(prevMask == 0){
            cur = 0;
            mask = 1;
            continue;
        }

        for(size_t k = 0; k < total_v; k++){
            if(!((prevMask >> k) & 1)) continue;
            if(fabs(dp(prevMask, k) + distances(k, cur) - dp(mask, cur)) < 1e-9){
                mask = prevMask;
                cur = k;
                break;
            }
        }
    }
    path.push_back(0);
    reverse(path.begin(), path.end());
    path.push_back(0);

    string best_path = "";
    best_path += to_string(path[0]);
    for(size_t i=1; i<path.size(); i++){
        best_path += " -> " + to_string(path[i]); 
    }
    return make_pair(ans, best_path);
}

pair<int,string> solveTSP_nonWeighted(){
    //returns size of shortest route and the vertex sequence of the shortest route
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}