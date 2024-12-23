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
    int getSwap(vector<int>& node){
        int res=0;
        vector<int> ans = node;
        sort(ans.begin(),ans.end());
        unordered_map<int,int> ump;
        for(int i=0;i<node.size();i++){
            ump[node[i]]=i;
        }
    
        for(int i=0;i<node.size();i++){
            if(node[i]!=ans[i]){
                int temp1 = node[i];
                int temp2 = ump[ans[i]];
                swap(node[i],node[ump[ans[i]]]);
                ump[node[i]] = i;
                ump[temp1] = temp2;
                res+=1;
            }
        }
        return res;
    }
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int res=0;
        while(!q.empty()){
            int n = q.size();
            vector<int> node;
            for(int i=0;i<n;i++){
                TreeNode* head = q.front();
                q.pop();
                node.push_back(head->val);
                if(head->left!=NULL){
                    q.push(head->left);
                }
                if(head->right!=NULL){
                    q.push(head->right);
                }
            }
            
            res+=getSwap(node);
           
            
        }
        return res;

    }
};