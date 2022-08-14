int solve(TreeNode* root){
//CODE HERE 
    int ans = 0;
    if(root == NULL)return ans;
    queue<pair<TreeNode*,int>>q;
    q.push({root,0});

    while(!q.empty()){
        int size = q.size();
        int minval = q.front().second;
        int first , last;
        for(int i = 0 ; i<size; i++){
            int currid = q.front().second-minval;
            TreeNode* t = q.front().first;
            q.pop();
            if( i == 0 )first = currid;
            if( i == size-1) last = currid;
            if(t->left) q.push({t->left , currid*2+1});
            if(t->right) q.push({t->right , currid*2+2});
        }
        ans = max ( ans , last - first + 1);
    }
    return ans;
}
