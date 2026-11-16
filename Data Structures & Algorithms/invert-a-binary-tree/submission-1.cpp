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
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);

        while (q.size() > 0) {
            if (TreeNode* n = q.front(); n != nullptr) {
                TreeNode* temp = n -> left;
                n -> left = n -> right;
                n -> right = temp;

                q.push(n -> left);
                q.push(n -> right);

                q.pop();
            } else {
                q.pop();
            }
        }

        return root;
    }
};
