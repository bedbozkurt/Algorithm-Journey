public class DiameterofBinaryTree {
    int maxDiameter = 0;
    public int diameterOfBinaryTree(TreeNode root) {
        calculateHeight(root);
        return maxDiameter;
    }
    public int calculateHeight(TreeNode node){
        if(node == null){
            return 0;
        }
        int leftHeight = calculateHeight(node.left);
        int rightHeight = calculateHeight(node.right);
        int diameter = leftHeight + rightHeight;
        if(diameter > maxDiameter){
            maxDiameter = diameter;
        }
        int result = Math.max(leftHeight, rightHeight)+1;
        return result;
    }
}
