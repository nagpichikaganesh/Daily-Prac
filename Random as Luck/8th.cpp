// You are using GCC
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(string c){
        transform(c.begin(), c.end(), c.begin(), ::tolower);
        int count = 0;
        int count2 = 0;
        string vowel = "aeiou";
        for(int i = 0; i < c.length(); i++){
            for(int j = 0; j < vowel.length(); j++){
                if(isalpha(c[i]) && c[i] != vowel[j]){
                    count += 1;
                }
            }
                if(count == 5){
                    count2 += 1;
                }
                count = 0;
        }
        cout << count2;
    }
};
int main(){
    Solution sol;
    string c;
    getline(cin, c);
    sol.answer(c);
    return 0;
}