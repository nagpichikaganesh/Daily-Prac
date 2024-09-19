// You are using GCC
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(int n, void * arr){
        float * arr1 = static_cast<float*>(arr);
        sort(arr1, arr1+n);
        cout << fixed << setprecision(1) << arr1[0];
    }
};

int main(){
    Solution sol;
    int n;
    cin >> n;
    float *arr = new float[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];}
    sol.answer(n, arr);
    delete[] arr;
    return 0;
}