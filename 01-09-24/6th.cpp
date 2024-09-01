#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void answer(int n1, int n2, int arr1[], int arr2[]){
        cout << "Enter " << n1 << " elements for arr1: " << endl;
        for(int i = 0; i < n1; i++){
            cin >> arr1[i];
        }
        cout << "Enter " << n2 << " elements for arr2: " << endl;
        for(int j = 0; j < n2; j++){
            cin >> arr2[j];
        }
        int m_arr[n1 +n2];
        for(int k = 0; k < n1; k++){
            m_arr[k] = arr1[k];
        }
        for(int l = 0; l < n2; l++){
            m_arr[n1 + l] = arr2[l];
        }
        for(int a = 0; a < n1 + n2; a++){
            cout << m_arr[a] << " ";
        }
        cout << endl;
// why 2 loops , bcz 1 one will only sort each ele for once not the whole loop.
// why size - i - 1 nad not size - i, bcz in case of i = 0, size - i = size and there is no size + 1 ele present
        for(int i = 0; i < n1 + n2; i++){ 
            for(int j = 0; j < (n1 + n2) - i - 1 ; j++){     
            if(m_arr[j] > m_arr[j+1]){
                int temp = m_arr[j];
                m_arr[j] = m_arr[j+1];
                m_arr[j+1] = temp;
            }
        }
    }
        for(int a = 0; a < n1 + n2; a++){
            cout << m_arr[a] << " ";
        }
        cout << endl;
        int min = m_arr[0];
        int max = m_arr[(n1+n2)-1];
        cout << "sum of max and min: " << max + min;
    }
};

int main(){
    Solution sol;
    int n1, n2;
    cout << "n1: ";
    cin >> n1;
    cout << "n2: ";
    cin >> n2;

    int arr1[n1];
    int arr2[n2];

    sol.answer(n1, n2, arr1, arr2);

    return 0;
}

 
