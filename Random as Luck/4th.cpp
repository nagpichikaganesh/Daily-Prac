#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(int size, string ele[], char letter){
        for(int i = 0; i < size; i++){
            cin >> ele[i];
        }
        cin >> letter;
        int count = 0;
        for(int i = 0; i < size; i++){
            if((ele[i][0]) == letter){
                count = count +1;
            }
        }
        cout << count;
    }
};

int main(){
    Solution sol;
    int size;
    cin >> size;
    
    string ele[size];
    char letter;
    
    sol.answer(size, ele, letter);
    return 0;
}