void find(TreeNode* root,int k , vector<int>&ans,int &val){
    if(root == NULL)return;
    if(val == 1)return;
    if(find(ans.begin(),ans.end(),k-root->val)!=ans.end()){
        val = 1;
        return;
    }
    ans.push_back(root->val);
    find(root->left,k,ans,val);
    find(root->right,k,ans,val);
}

int solve(TreeNode* root, int k){
//CODE HERE 
    if(root == NULL)return 0;
    vector<int>ans;
    int val = 0 ;
    find(root,k,ans,val);
    if(val == 1)return 1;
    else return 0;
}
