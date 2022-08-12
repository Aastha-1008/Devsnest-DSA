
int solve(TreeNode* root, int targetSum){
//CODE HERE 
    if(root == NULL)return 0;
    if(root->left == NULL && root->right == NULL){
        targetSum -= root->val;
        if(targetSum == 0 )return true;
        if(targetSum <0) return false;
    }
    bool l = solve(root->left , targetSum-root->val);
    bool r = solve(root->right , targetSum-root->val);
    return l or r;
}
