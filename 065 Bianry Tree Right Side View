vector<int> solve(TreeNode* root){
//CODE HERE 
    vector<int>ans;
    if(root == NULL)return ans;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        
        vector<int>v;
        for(int i = 0 ; i<size ; i++){
            TreeNode* temp = q.front();q.pop();
            v.push_back(temp->val);
            if(temp->left !=NULL)q.push(temp->left);
            if(temp->right !=NULL)q.push(temp->right);
        }
        int s= v.size();
        ans.push_back(v[s-1]);
    }
    return ans;
}
