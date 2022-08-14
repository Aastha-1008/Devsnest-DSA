class Node{
    public:
    bool bst;
    int minval,maxval,sum;
};

Node find(TreeNode* root, int& maxsum){
    if(!root){
        return {true,INT_MAX, INT_MIN,0};
    }
    auto left = find(root->left,maxsum);
    auto right = find(root->right,maxsum);

    Node n;

    if(left.bst && right.bst && left.maxval < root->val && right.minval > root->val){
        n.bst = true;
        n.maxval = max(root->val , right.maxval);
        n.minval = min (root->val , left.minval);
        n.sum = left.sum + right.sum+ root->val;
    }
    else{
        n.bst = false;
        n.maxval = INT_MAX;
        n.minval = INT_MIN;
        n.sum = max(left.sum , right.sum);
    }
    maxsum = max (maxsum , n.sum);
    return n;
}

int solve(TreeNode* root){
//CODE HERE 
    int maxsum = 0;
    find(root,maxsum);
    return maxsum;
}
