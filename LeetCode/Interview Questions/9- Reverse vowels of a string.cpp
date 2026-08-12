#include <bits/stdc++.h>
using namespace std;
typedef long long int ll_int;

class Solution {
public:

    string reverseVowels(string s) {
        int ptr1=0, ptr2= s.size()-1;
        bool k1=0,k2=0;
        while(ptr1<ptr2){
            switch(toupper(s[ptr1])){
                case 'A': k1=true; break;
                case 'E': k1=true; break;
                case 'I': k1=true; break;
                case 'O': k1=true; break;
                case 'U': k1=true; break;
                default: ptr1++;
            }

            switch(toupper(s[ptr2])){
                case 'A': k2=true; break;
                case 'E': k2=true; break;
                case 'I': k2=true; break;
                case 'O': k2=true; break;
                case 'U': k2=true; break;
                default: ptr2--;
            }
            if(k1 && k2){
                swap(s[ptr1++],s[ptr2--]);
                k1=0,k2=0;
            }
        }
    return s;
    }
};

int main(){
    Solution w;
}