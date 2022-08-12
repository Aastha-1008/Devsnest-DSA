void find(TreeNode* root , int low , int high , int& sum){
    if(root == NULL)return;
    if(root->val >=low && root->val <= high)sum+=root->val;
    find(root->left , low,high,sum);
    find(root->right, low,high,sum);
}
int solve(TreeNode* root, int low, int high){
//CODE HERE 
    int sum = 0 ;
    if(root == NULL)return sum ;
    find(root,low,high,sum);
    return sum;
}
