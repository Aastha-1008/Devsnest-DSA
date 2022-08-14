TreeNode* curr ;

void inorder ( TreeNode* node){
    if(node == NULL)return;
    inorder(node->left); 
    node->left = NULL;
    curr->right = node;
    curr = node;
    inorder(node->right);
}

TreeNode* solve(TreeNode* root){
//CODE HERE
    TreeNode* res = new TreeNode(0);
    curr = res;
    inorder(root);
    return res->right;
}
