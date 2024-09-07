#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void leftover(int size, int ele[], int range[]){
        cout << "Enter " << size << " elements: " << endl;
        for(int i = 0; i < size; i++){
            cin >> ele[i];
        }
        cout << "Enter the range: ";
        for(int i = 0; i < 2; i++){
            cin >> range[i];
        }
        int count = 0;
        for(int i = range[0]; i <= range[1]; i++){
                count = count + 1;
        }

        int out_of_range = size - count;
        cout << "There are " << out_of_range << " out of range" << endl;
    }
};

int main(){
    Solution sol;
    int size;
    cout << "size: ";
    cin >> size;

    int ele[size];
    int range[2];

    sol.leftover(size, ele, range);

    return 0;

}