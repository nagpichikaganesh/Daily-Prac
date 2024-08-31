#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void pl(int n, int ele[]){
        cout << "Enter " << n << " elements: " << endl;
        for(int i = 0; i < n; i++){
            cin >> ele[i];
        }
        int profits = 0;
        for(int i = 0; i < n; i++){
            if(ele[i] > 0){
                profits = profits + ele[i];
            }
        }
        cout << "Total profits: " << profits;
    }
};

int main(){
    Solution sol;
    int n;
    cout << "n: ";
    cin >> n;

    int ele[n];
    sol.pl(n, ele);
    return 0;
}