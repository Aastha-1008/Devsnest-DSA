int isvalid(TreeNode* root , int least,int high){
    if(root == NULL)return 1;
    if(root->left !=  NULL && (root->left->val >= root->val || root->left->val <=least)) return 0;
    if(root->right !=NULL && (root->right->val <= root->val ||root->right->val >= high)) return 0;
    return isvalid(root->left,least,root->val)&& isvalid(root->right,root->val,high);
}

int solve(TreeNode* root){
//CODE HERE 
    if(isvalid(root,INT_MIN,INT_MAX))return 1;
    return 0;
}
