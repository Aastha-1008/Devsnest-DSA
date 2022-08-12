void find(TreeNode* p , TreeNode* q , int& ans){
    if(ans == 0 )return ;
    if(p==NULL && q==NULL)return;
    if(p==NULL || q == NULL){
        ans= 0;
        return;
    }
    if((p->val != q->val )){
        ans = 0 ;
        return ;
    }
    find(p->left, q->left , ans);
    find(p->right, q->right ,ans);

}

int solve(TreeNode* p, TreeNode* q){
//CODE HERE 
    if(p== NULL && q == NULL)return 1;
    if(p==NULL || q == NULL)return 0;
    int ans = 1 ;
    find(p,q,ans);
    return ans;
}
