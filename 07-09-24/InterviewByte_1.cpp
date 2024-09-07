#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int>  twoSum(vector<int>& nums, int target) {
        int sum = 0;
        vector<int> vec1;
        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1; j < nums.size(); j++){
                if(nums[i] + nums[j] == target){
                    vec1.push_back(i);
                    vec1.push_back(j);
                }
            }
        }
            return vec1;
    }
};

int main(){
    Solution sol;
    int n;
    cout << "n: ";
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    int target;
    cout << "target: ";
    cin >> target;
    
    vector<int> vec2 = sol.twoSum(nums, target);
    for(auto i : vec2){
        cout << i << " ";
    }
    return 0;
}