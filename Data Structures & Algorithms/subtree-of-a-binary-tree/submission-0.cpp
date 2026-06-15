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
// IF BOTH ARE IDENTICAL/SAME(AS DONE IN SAME TREE QUESTION)
    bool isidentical(TreeNode*p,TreeNode*q){
        if(p==NULL && q==NULL)return true;
        if(p==NULL || q==NULL) return false;
        if(p->val!=q->val)return false;
        bool leftnode=isidentical(p->left,q->left);
        bool rightnode=isidentical(p->right,q->right);
        if(leftnode==true &&  rightnode==true)return true;
        return false;
    }
    /*FINDING THE ROOT OF SUBTREEE IN THE TREE AND  WHENEVER SUBROOT MATCHES
    THE NODE OF MAIN TREE, APPLY ISIDENTICAL() AND CHECK IF THEY ARE SAME */
    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        if(root==NULL && subroot==NULL)return true;
        if(root==NULL || subroot==NULL) return false;
        if(root->val==subroot->val && isidentical(root,subroot))return true;
        return isSubtree(root->left,subroot) || isSubtree(root->right,subroot);
       
    }
};
