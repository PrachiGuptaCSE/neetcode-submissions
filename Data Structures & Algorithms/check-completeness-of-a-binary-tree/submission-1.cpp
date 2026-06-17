/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        //A BINARY TREE IS SAID TO BE COMPLETE WHEN THE LEVEL ORDER TRAVERSAL OF A BINARY TREE CONSISTS OF NULL NODES ONLY AT THE END OR NO NULL NODES AT ALL.
        if(root==NULL)return true;
        bool nullfound=false;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode*t=q.front();
            q.pop();
            if(t==NULL){
                nullfound=true;
            }
            else{
                if(nullfound)return false;
                q.push(t->left);
                q.push(t->right);
            }
        }
    return true;    
    }
};