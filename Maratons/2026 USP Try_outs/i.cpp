#include <bits/stdc++.h>
#define ENDL '\n'
#define int long long 
#define fi(n) for(int i = 0; i < n; i++)
#define fj(m) for(int j = 0; j < m; j++)
#define fa(v) for(auto t : v)
#define ci(n) cin >> n
#define co(n) cout << n 
#define vi vector<int>  
#define vvi vector<vector<int>>

using namespace std;

template <typename T>
class v2d {
private:
    std::vector<T> data;
    size_t rows;
    size_t cols;
public:
    v2d(size_t r, size_t c, T init_data) : rows(r), cols(c), data(r * c, init_data) {}
    int& operator()(size_t r, size_t c) { //2D coordinate getter
        return data[(r * cols) + c];}

    int operator()(size_t r, size_t c) const { //2D coordinate setter
        return data[(r * cols) + c];}

    const std::vector<int>& get_flat() const { return data; } // Access the raw flat structure directly
};

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}