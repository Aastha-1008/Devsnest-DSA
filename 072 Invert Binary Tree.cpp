void swaper(TreeNode* root){
    if(root == NULL)return;
    if(root->left == NULL && root->right == NULL)return;
    TreeNode* temp =root->left;
    root->left = root->right;
    root->right = temp;
    swaper(root->left);
    swaper(root->right);
}
TreeNode* solve(TreeNode* root){
//CODE HERE 
    if(root == NULL)return root;
    if(root->left == NULL && root->right == NULL)return root;
    swaper(root);
    return root;
}
