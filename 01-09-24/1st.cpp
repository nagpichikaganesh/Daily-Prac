#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void avg(int arr[], int size){
        cout << "Enter " << size << " elements : " << endl;
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }

        int sum = 0;
        int count = 0;
        for(int i = 2; i < size; i = i + 2){
            sum = sum + arr[i];
            count = count + 1;
        }
        double avg = static_cast<double>(sum) / count;
        cout << fixed << setprecision(2) << avg << endl;
    }
};

int main(){
    Solution sol;
    
    int size;
    cout << "size: ";
    cin >> size;
    
    int arr[size];
    sol.avg(arr, size);
    return 0;
}