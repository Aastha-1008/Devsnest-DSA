TreeNode* create(vector<int>& pre  , map<int,int>&m,int start , int end ){
    static int preindex = 0;
    if(start>end)return NULL;
    int val = pre[preindex++];
    TreeNode* node = new TreeNode(val);
    if(start == end)return node;

    int pos = m[val];
    node->left = create(pre,m,start,pos-1);
    node->right = create(pre,m , pos+1,end);
    return node;
}

TreeNode* solve(int n1, int n2, vector<int> preorder, vector<int> inorder){
//CODE HERE 
    if(n1!=n2)return NULL;
    map<int,int> m;
    for(int i = 0 ; i<n2 ; i++){
        m[inorder[i]] = i;
    }
    return create(preorder,m,0,n1-1);
}
