public class BalancedBinaryTree {
    public boolean isBalanced(TreeNode root) {
        if(calculateHeight(root) == -1){
            return false;
        }
        return true;
    }
    public int calculateHeight(TreeNode node){
        if(node == null){
            return 0;
        }
        int leftHeight = calculateHeight(node.left);
        if(leftHeight == -1){
            return -1;
        }
        int rightHeight = calculateHeight(node.right);
        if(rightHeight == -1){
            return -1;
        }
        if(Math.abs(leftHeight - rightHeight) > 1){
            return -1;
        }
        return Math.max(leftHeight, rightHeight) + 1; 
    } 
}
