static int postind;
TreeNode* create(vector<int>post , map<int,int>m , int s , int e){
    if(s>e || postind<0)return NULL;
    TreeNode* node = new TreeNode(post[postind]);
    int val = m[node->val];
    postind--;
    node->right = create(post,m,val+1,e);
    node->left = create(post,m,s,val-1);
    return node;
}

TreeNode* solve(int n1, vector<int> inorder, int n2, vector<int> postorder){
//CODE HERE
    postind = n1-1;
    map<int,int>m;
    for(int i = 0 ; i<n1 ; i++)m[inorder[i]] = i;
    return create(postorder,m,0,n1-1);
}
