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
    std::vector<int> data;
    size_t rows;
    size_t cols;
public:
    v2d(size_t r, size_t c, int init_data) : rows(r), cols(c), data(r * c, init_data) {}
    int& operator()(size_t r, size_t c) { //2D coordinate getter
        return data[(r * cols) + c];}

    int operator()(size_t r, size_t c) const { //2D coordinate setter
        return data[(r * cols) + c];}
    
    size_t getRows(){
        return rows;}
    size_t getColluns(){
        return cols;}

    const std::vector<int>& getFlat() const { return data; } // Access the raw flat structure directly
};

int MOD = 1e9 + 7;

int solveTSP(v2d &distances){
    //returns value of shortest route and the vertex sequence of the shortest route
    size_t total_v = distances.getRows();
    v2d dp((1<<(total_v-1)), total_v-1, 0);

    for(size_t mask = 1; mask < (1u<<(total_v-1)); mask++){

        for(size_t new_city = 0; new_city < total_v-1; new_city++){
            if(!((mask >> new_city) & 1)) continue;
            
            size_t prev_mask = mask ^ (1<<new_city);
            if(prev_mask == 0){
                dp(mask, new_city) = distances(0,new_city+1);
                continue;
            }

            for (size_t p = prev_mask; p; p &= (p - 1)) {
                size_t mask_city = __builtin_ctz(p);   // index of lowest set bit
                int edges = distances(mask_city+1, new_city+1);
                if (edges > 0) {
                    dp(mask, new_city) = 
                        (dp(mask, new_city) + ((ll)edges * dp(prev_mask, mask_city))) % MOD;
                }
            }

        }   

    }
    size_t full_mask = (1u << (total_v-1)) - 1;
    size_t target = total_v - 2;  // bit for city (n-1), i.e. actual city n
    int ans = dp(full_mask, target) % MOD;
    return ans;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m; ci(n>>m);
    v2d distance_matrix(n,n,0);

    for(int i =0; i< m; i++){
        int a,b; ci(a>>b);
        distance_matrix(a-1,b-1)++;
    }

    cout<< solveTSP(distance_matrix)<< '\n';
    
}