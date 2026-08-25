#include <bits/stdc++.h>


using namespace std;




int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, n;
    cin >> s;
    int sec = 1;
    char beta = s.at(0);
    for(int i = 1; i < s.size(); i++){
        if(s.at(i) != beta){
            n.push_back(beta);
            if(sec != 1){
                n= n+to_string(sec);
            }
            beta = s.at(i);
            sec = 1;
        }
        else{
            sec++;
        }
    }
    n.push_back(beta);
    if(sec != 1){
     n= n+to_string(sec);
    }
    cout << n;
}