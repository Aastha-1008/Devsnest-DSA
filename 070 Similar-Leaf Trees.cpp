void find(TreeNode* root , vector<int>& v){
    if(root==NULL)return;
    if(root->left == NULL && root->right == NULL){
        v.push_back(root->val);
        return;
    }
    find(root->left , v);
    find(root->right, v);
}

int solve(TreeNode* root1, TreeNode* root2){
//CODE HERE 
    vector<int>v1,v2;
    find(root1,v1);
    find(root2,v2);
    int n = v1.size();
    int m = v2.size();
    if(n!=m)return 0;
    for(int i = 0 ; i<n ; i++){
        if(v1[i] != v2[i])return 0;
    }
    return 1;
}

