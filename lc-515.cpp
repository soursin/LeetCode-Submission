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
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL){
            return {};
        }
        vector<int> res;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            int maxi = INT_MIN;
            for(int i=0;i<n;i++){
                TreeNode* head = q.front();
                q.pop();
                maxi = max(maxi,head->val);
                if(head->left){
                    q.push(head->left);
                }
                if(head->right){
                    q.push(head->right);
                }
            }
            res.push_back(maxi);
        }
        
        return res;
    }
};