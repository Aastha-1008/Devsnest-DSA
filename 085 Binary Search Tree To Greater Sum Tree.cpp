int sum = 0;
void find(TreeNode * root){
    if(!root)return;
    find(root->right);
    root->val = root->val + sum;
    sum = root->val;
    find(root->left);
}

TreeNode* solve(TreeNode* root){
//CODE HERE
    if(!root)return root;
    find(root);
    return root;
}
