#include<bits/stdc++.h>
vector<vector<int>> solve(TreeNode* root){
//CODE HERE 
    vector<vector<int>>ans;
    if(root==NULL)return ans;
    queue<TreeNode*>q;
    q.push(root);
    int i = 0;
    while(!q.empty()){
        int s = q.size();
        vector<int>v;
        for(int i = 0 ; i<s ; i++){
            TreeNode* t = q.front();
            q.pop();
            v.push_back(t->val);
            if(t->left !=NULL)q.push(t->left);
            if(t->right != NULL)q.push(t->right);
        }
        if(i==0){
            ans.push_back(v);
            i = 1;
        }
        else if(i==1){
            reverse(v.begin(),v.end());
            ans.push_back(v);
            i=0;
        }
    }
    return ans;
}
