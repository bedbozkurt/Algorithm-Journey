#include <algorithm>
#include <cmath>
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
    bool isBalanced(TreeNode* root) {
        if(calculateHeight(root) == -1){
            return false;
        }
        return true;
    }
    int calculateHeight(TreeNode* node){
        if(node == nullptr){
            return 0;
        }
        int leftHeight = calculateHeight(node->left);
        if(leftHeight == -1){
            return -1;
        }
        int rightHeight = calculateHeight(node->right);
        if(rightHeight == -1){
            return -1;
        }
        if(abs(leftHeight - rightHeight) > 1){
            return -1;
        }
        return max(leftHeight, rightHeight) + 1; 
    } 
};