int depth(TreeNode* root){
    if(root==NULL)return 0;
    return 1+max(depth(root->left),depth(root->right));
}
int solve(TreeNode* root){
//CODE HERE 
    if(root == NULL)return 1;
    int lh = depth(root->left);
    int rh = depth(root->right);
    if(abs(lh-rh)>1)return 0;
    else return 1;
}
