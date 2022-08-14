int a;
TreeNode* ans=new TreeNode(-1);
void find(TreeNode* root){
    if(root== NULL||a<=0)return;
    find(root->left);
    if(a<=0)return;
    a--;
    if(a==0 ){ans = root;return;}
    find(root->right);
}
int solve(TreeNode* root, int k){
//CODE HERE 
    a = k;
    if(root == NULL)return ans->val;
    find(root);
    return ans->val;
}
