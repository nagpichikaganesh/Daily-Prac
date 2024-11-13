#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

vector<vector<int>> level_order_traversal(TreeNode* root) {
    vector<vector<int>> ans;
    if(root == NULL){
        return ans;   
    }
    queue<TreeNode*> q;
    q.push(root);

    while(!q.empty()){
        vector<int> vec1;
        int size = q.size();
        for(int i = 0; i < size; i++){
            TreeNode* node = q.front();
            q.pop();
            vec1.push_back(node->data);
        if(node->left != nullptr){
            q.push(node->left);
        }
        if(node->right != nullptr){
            q.push(node->right);
        }
        }
        ans.push_back(vec1);
    }
    return ans;
}

void print(const vector<vector<int>> levels){
    for(const auto level : levels){
        for(auto num : level){
            cout << num << " ";
        }
        cout << endl;
    }
}

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(6);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);

    vector<vector<int>> call = level_order_traversal(root);
    print(call);
}