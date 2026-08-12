#include <bits/stdc++.h>
using namespace std;
typedef long long int ll_int;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int smallest;
        bool choice=1;

        if(word1.size()>=word2.size()){
            smallest= word2.size();
        }
        else{
            smallest= word1.size();
            choice=0;
        }

        array<string,2> words = {word1,word2};
        string output(word2.size()+word1.size()+1,'\0');

        for(int i=0, j=0; i<smallest; i++,j+=2 ){
            output[j]=word1[i];
            output[j+1]=word2[i];
        }

        for(int i=smallest; i<words.at(choice).size(); i++){
            output[i]= words.at(choice)[i];
        }
        return output;
    }
};

int main(){
    Solution w;
    cout<<w.mergeAlternately("ab","wpr")<<endl;
}