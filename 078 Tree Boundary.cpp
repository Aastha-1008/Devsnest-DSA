void findleaf(TreeNode* root , vector<int>& ans){
    if(root == NULL) return;
    if(root->left ==NULL && root->right==NULL){
        ans.push_back(root->val);
        return ;
    }
    findleaf(root->left , ans);
    findleaf(root->right , ans);
}
void left ( TreeNode* root , vector<int>& ans){
    if(root == NULL)return ;
    if(root->left == NULL && root->right == NULL)return;
    ans.push_back(root->val);
    if(root->left) left(root->left , ans);
    else left(root->right,ans);
}
void right(TreeNode* root , vector<int>& ans){
    if(root == NULL)return;
    if(root->left == NULL && root->right == NULL)return;
    if(root->right)right(root->right,ans);
    else right(root->right,ans);
    ans.push_back(root->val);
}

vector<int> solve(TreeNode* root){
//CODE HERE 
    vector<int>ans;
    if(!root)return ans;
    ans.push_back(root->val);
    left(root->left,ans);
    findleaf(root->left,ans);
    findleaf(root->right,ans);
    right(root->right,ans);
    return ans;
}
