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
 class FindElements {
    public:
        unordered_map<int,bool> ump;
        FindElements(TreeNode* root) {
            queue<TreeNode*> q;
            int curr_val=0;
            root->val = 0;
            q.push(root);
            while(!q.empty()){
                auto parent = q.front();
                q.pop();
                ump[parent->val]=true;
                int left = 2*parent->val + 1;
                int right = 2*parent->val + 2;     
                if(parent->left !=NULL){
                    parent->left->val = left;
                    q.push(parent->left);
                }
                if(parent->right!=NULL){
                    parent->right->val = right;
                    q.push(parent->right);
                }
            }
        }
        
        bool find(int target) {
            return ump[target];
        }
    };
    
    /**
     * Your FindElements object will be instantiated and called as such:
     * FindElements* obj = new FindElements(root);
     * bool param_1 = obj->find(target);
     */