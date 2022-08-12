int find(TreeNode* root){
    if(root == NULL)return 0;
    int l = 1+find(root->left);
    int r = 1+find(root->right);
    return max(l,r);
}

int solve(TreeNode* root){
//CODE HERE 
    if(root == NULL)return 0;
    return find(root);
}
