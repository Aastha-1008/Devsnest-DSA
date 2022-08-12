TreeNode* solve(TreeNode* root1, TreeNode* root2){
//CODE HERE 
    if(root1 == NULL)return root2;
    if(root2 == NULL)return root1;
    root1->val += root2->val;
    root1->left = solve(root1->left , root2->left);
    root1->right = solve(root1->right , root2->right);
    return root1;
}
