int sum = 0 ;

void find(TreeNode* root , int n){
    if(root == NULL)return;
    if(root->left == NULL and root->right == NULL){
        n *= 2;
        n+= root->val;
        sum += n;
        return;
    }
    n = n*2;
    n+= root->val;
    find(root->left , n);
    find(root->right , n);

}

int solve(TreeNode* root){
//CODE HERE 
    sum = 0;
    find(root,0);
    return sum;
}
