#include <bits/stdc++.h>
#define int long long
using namespace std;



signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    
    if(s.size() == 2){
        if(s.at(0) != '0' && s.at(1) != '0'){
            cout << s.at(0) << " " << s.at(1);        
        }
        else cout << -1;
    }
    else {
       vector<string> numbers;
       string a;
       for(int i = 0; i < s.size()-1; i++){
            a.push_back(s.at(i));
            numbers.push_back(a);
       }
       a.clear();
        for(int i = s.size()-1; i > 0; i--){
            
            a.push_back(s.at(i));
           reverse(a.begin(), a.end());
            numbers.push_back(a);
            reverse(a.begin(), a.end());
       }
       map<string, int> mapa;
       bool saiu = false;
       for(auto it: numbers){
     
            if(!mapa.contains(it) && s.at(it.size() ) != '0'){
               if(it.at(0) != '0') mapa.insert({it, 1});
            }
          
       }
    if(mapa.size() > 2)cout << -1;
    else {
        a = s;
      switch(s.size()){
        case 3:
            if(a.at(0) != '0' && a.at(1) != '0'){
                cout << a.at(0) << " " << a.at(1)<<a.at(2);
            }
            else {
                cout << a.at(0) << a.at(1) << " " << a.at(2);
            }
        break;
        case 4: 
            if(a.at(0) != '0' && a.at(1) != '0'){
                cout << a.at(0) << " " << a.at(1)<<a.at(2)<<a.at(3);
            }
            else if(a.at(0) != '0' && a.at(2) != '0'){
                cout << a.at(0) << a.at(1) << " "<< a.at(2)<<a.at(3);
            }
            else if(a.at(0)!= '0' && a.at(3)){
                cout << a.at(0) << a.at(1)<<a.at(2)<<" "<<a.at(3);
            }
        break;
      }
        }
       
    }
    
    }

