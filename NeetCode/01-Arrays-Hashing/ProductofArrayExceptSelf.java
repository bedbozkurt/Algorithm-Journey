public class ProductofArrayExceptSelf {
    public int[] productExceptSelf(int[] nums) {
        int[] leftProduct = new int[nums.length];
        leftProduct[0] = 1;
        for(int i = 1; i < leftProduct.length; i++){
            leftProduct[i]  = leftProduct[i-1] * nums[i-1];
        }
        int[] rightProduct = new int[nums.length];
        rightProduct[nums.length - 1] = 1;
        for(int i = rightProduct.length -2; i >= 0; i--){
            rightProduct[i] = rightProduct[i+1] * nums[i+1];
        }
        int[] result = new int[nums.length];
        for(int i = 0; i < leftProduct.length; i++){
            result[i] = leftProduct[i] * rightProduct[i];
        }
        return result;
    }
}
