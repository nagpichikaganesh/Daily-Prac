#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(char letter){
        string vowel = "aeiou";
        for(int i = 0; i < vowel.size(); i++){
            if(vowel[i] == letter || letter == toupper(vowel[i])){
                cout << "vowel";
                break;
            }
        else if(isalpha(letter)){
            cout << "consonent";
            break;
        }
        else{
            cout << "Invalid";
            break;
        }
        }
    }
};
int main(){
    Solution sol;
    char letter;
    cout << "letter: ";
    cin >> letter;
    
    sol.answer(letter);
    return 0;
}