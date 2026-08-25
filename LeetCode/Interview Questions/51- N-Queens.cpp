#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f1 first
#define f2 second

class Solution {
public:
    static vector<int>  queens;
    static vector<vector<int>>  result;
//
     vector<vector<string>> solveNQueens(int n){
        queens.clear();
        result.clear();
        queens.resize(n);
        recurse(0);

        vector<vector<string>> outout;
        for(auto vec : result){
            vector<string> out(n);

            for(int i = 0; i < n ; i++){
                out[i] = string(n, '.');
                out[i][vec[i]] = 'Q';
            }
            outout.push_back(out);
        }
        return outout;
    }

    void recurse(int queen){
        if(queen == queens.size()){
            result.push_back(queens);
            return;
        }

        bool valid = false;
        int x0 = 0;
        while(true){
            valid = true;
            for(int i = 0; i<queen; i++){
                if(!check_validity(queens[i], i, x0, queen)){
                    valid = false;
                    break;
                } 
            }  
            if(!valid){
                x0++;
            }

            else{
                queens[queen] = x0;
                recurse(queen+1);
                x0++;
            }

            if(x0 == queens.size()) return;
        }
    }

    bool check_validity(int qx, int qy, int x, int y){
        //true if valid else false 
        return !((x == qx) || (y == qy) || (abs(x - qx) == abs(y - qy)));
    }
};

vector<int>  Solution::queens;
vector<vector<int>>  Solution::result;

int main(){
    Solution w;
    vector<vector<string>> out = w.solveNQueens(1);
    for(auto vec : out){
        cout<<"[ ";
        for(auto s : vec){
            cout<<"("<<s<<") ";
        }
        cout<<"]"<<endl;
    }

    cout<<w.result.size();

}