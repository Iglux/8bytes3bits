#include <bits/stdc++.h>
#define int long long
using namespace std;



signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int size = s.size();
    if(s[0] == '0'){
        cout << "-1\n";
        return 0;
    }
    if(size == 2){
        if(s[0] == '0' || s[1] == '0'){
            cout << "-1\n";
        } else cout << s[0] << ' ' << s[1] << "\n";
        return 0;
    }
    if(size == 3){
        if(s[1] != '0' && s[2] != '0') {
            cout << "-1\n";
            return 0;
        }
        else if(s[2] == '0' && s[1] != '0'){
            cout << s[0] << ' ' << s.substr(1, 2);
            return 0;
        }
        else if(s[2] == '0'){
            cout << "-1\n";
            return 0;
        }
        else {
            cout << s[1] << ' ' << s[2] << '\n';
            return 0;
        }
    }
    if(size == 4){
        int count = 0;
        for(int i = 0; i < 4; i++){
            if(s[i] == '0')count++;
        }
        if(count!=2){
            cout << "-1\n";
            return 0;
        }
        if(s[1] == '0' && s[2] == '0'){
            cout << s.substr(0, 3) << ' ' << s[3] << "\n";
        }
        else if(s[1] == '0' && s[3] == '0'){
            cout << s.substr(0, 2) << " " << s.substr(2, 2) << "\n";
        }
        else cout << s[0] << " " << s.substr(1, 3) << "\n";
        return 0;

    }
    return 0;
}