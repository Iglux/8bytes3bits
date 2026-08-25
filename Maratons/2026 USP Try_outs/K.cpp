#include <bits/stdc++.h>


using namespace std;



int main(){
    int t;
    cin >> t;
    while(t--){
        int c;
        cin >> c;
        if(c > 987654321){
            cout << -1;
            continue;
        }     
        int tot = 0;
        string s = to_string(c);
        vector<int> guys;
        vector<bool> numeros(10);
        guys.push_back(0);
        for(int i = 0; i < s.size(); i++){
            guys.push_back((int)(s.at(i)-'0'));
        }
        bool zero = false;
        for(int i = 1; i < guys.size(); i++){
            while(numeros.at(guys.at(i))){
                tot+=pow(10, guys.size()-1-i);
               if(guys.at(i) == 9){
                guys.at(i) = 0;
                i--;
                if(guys.at(i) == 9){
                    guys.at(i) = 0;
                    i--;
                }
                guys.at(i)++;

               }   
               else guys.at(i)++;
            }
            numeros.at(guys.at(i)) = true;

        }
    }

}