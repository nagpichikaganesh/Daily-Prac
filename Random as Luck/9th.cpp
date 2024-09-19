// You are using GCC
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(int size, int  *array){
        const int MAX_ID = 1000; // total no of indices
        int *count = new int [MAX_ID + 1](); // since 0-1000 needs 10001 space
        for(int i = 0; i < size; i++){
            cin >> array[i];
            // if(array[i] >= 1 && array[i] <= MAX_ID){
            count[array[i]]++; // access the ele and use it as a indice like arr[5] and increment it's count
        }
        for(int i = 1; i < MAX_ID; i++){ // check for i in 0 - 1000 count > 0 then print i & its count
            if(count[i] > 0){
                cout << i << " - " << count[i] << " time" << (count[i] == 1 ? "" : "s") << endl;
            }
        }
        delete[] count;
    }
};
int main(){
    Solution sol;
    int n; 
    cin >> n;
    int *arr = new int [n]();
    sol.answer(n, arr);
    delete[] arr;
    return 0;
}
