#include <algorithm>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    int maxDiameter = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        calculateHeight(root);
        return maxDiameter;
    }
    int calculateHeight(TreeNode* node){
        if(node == nullptr){
            return 0;
        }
        int leftHeight = calculateHeight(node->left);
        int rightHeight = calculateHeight(node->right);
        int diameter = leftHeight + rightHeight;
        if(diameter > maxDiameter){
            maxDiameter = diameter;
        }
        int result = max(leftHeight, rightHeight)+1;
        return result;
    }
};