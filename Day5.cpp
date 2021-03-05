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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>res;
        if(root==NULL){
            res.push_back(0);
            return res;
        }
        
        queue<TreeNode*>que;
        que.push(root);
        int size=1;
        long sum=0;
        int count=1;
        while(que.size()!=0){
            TreeNode* front= que.front();
            que.pop();
            sum+= front->val;
            if(front->left!=NULL){
                que.push(front->left);
            }
            if(front->right!=NULL){
                que.push(front->right);
            }
            size--;
            if(size==0){
                res.push_back((double)sum/(double)count);
                sum=0;
                size=que.size();
                count=size;
            }
        }
        return res;
    }
};