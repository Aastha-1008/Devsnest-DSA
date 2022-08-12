TreeNode* solve(TreeNode* root, int p, int q){
//CODE HERE 
    if(root == NULL)return root;
    if(root->val == p || root->val == q)return root;
    TreeNode* l = solve(root->left , p,q);
    TreeNode* r = solve(root->right , p,q);
    if(l!=NULL && r!=NULL)return root;
    if(l!=NULL)return l;
    else return r;

}
