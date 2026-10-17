class Solution {
private:
    void dfs(TreeNode* node, string current_path, vector<string>& result) {
        if (node == nullptr) return;
        current_path += to_string(node->val);
     if (node->left == nullptr && node->right == nullptr) {
            result.push_back(current_path);
            return;
        }
       current_path += "->";
        dfs(node->left, current_path, result);
        dfs(node->right, current_path, result);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result; 
        if (root == nullptr) return result; 
        dfs(root, "", result); 
        return result; 
    }
};
