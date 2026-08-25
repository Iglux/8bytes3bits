#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f1 first
#define f2 second

vector<string> board(8);

class Solution {
public:
    static vector<int>  queens;
    static int solutions;

     int solveNQueens(int n){
        queens.resize(n);
        recurse(0);
        return solutions;
    }

    void recurse(int queen){
        if(queen == queens.size()){
            solutions++;
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
            if((board[queen][x0]=='*') || !valid){
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
int Solution::solutions = 0;


int main(){
    Solution w;
    for(int i=0; i<8; i++){
        cin>>board[i];
    }
    cout<<w.solveNQueens(8)<<'\n';
}