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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int level=0;
        while(!q.empty()){
            int n = q.size();
            vector<int> odd;
            vector<TreeNode*> parent;
            for(int i=0;i<n;i++){
                TreeNode* node = q.front();
                q.pop();
                //cout<<node->val<<" ";
                if(level%2==0){
                    parent.push_back(node);
                    if(node->left!=NULL)
                        odd.push_back(node->left->val);
                    if(node->right!=NULL)
                        odd.push_back(node->right->val);
                }else{
                    if(node->left!=NULL)
                        q.push(node->left);
                    if(node->right!=NULL)
                        q.push(node->right);
                }
            }
            int j=odd.size()-1;
            for(int i=0;i<parent.size();i++){
                TreeNode* node = parent[i];
                if(node->left!=NULL){
                    node->left->val=odd[j];
                    q.push(node->left);
                }
                if(node->right!=NULL){
                    node->right->val = odd[j-1];
                    q.push(node->right);
                }
                j-=2;
            }
            level+=1;
        }

        return root;
    }
};