class ContainerWithMostWater {
    public static int maxArea(int[] height) {
        int maxArea = 0;
        int left = 0;
        int right = height.length-1;
        while(left < right){
            int tempArea = (right - left) * Math.min(height[left], height[right]);
            if(tempArea > maxArea){
                maxArea = tempArea;
            }
            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);       
        int n = scan.nextInt();
        int[] height = new int[n];
        

        for (int i = 0; i < n; i++) {
            height[i] = scan.nextInt();
        }
        int answer = maxArea(height);
        System.out.println(answer);
        scan.close();
    }
}