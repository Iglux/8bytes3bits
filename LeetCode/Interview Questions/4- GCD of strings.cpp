#include <bits/stdc++.h>
using namespace std;
typedef long long int ll_int;

class Solution {
public:
     string gcdOfStrings(string str1, string str2) {

        if(str1+str2 == str2+str1){
            return str1.substr(0,gcd(str1.size(),str2.size()));
        }

        else return "";
        

    }
};

int main(){
    Solution w;
    string str1 = "abcd", str2 = "abcabc";
    cout << w.gcdOfStrings(str1,str2)<<endl;
}