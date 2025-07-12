//kadane most optimal solution 
class Solution {
    public int maxSubArray(int[] nums) {

      int maxSum= nums[0];
      int sum=maxSum>0?maxSum:0;
      for(int i=1;i<nums.length;i++){
        // System.out.println(maxSum +" "+ sum);
        int value=nums[i]+sum;
        if(value>maxSum){
            maxSum=value;
            sum=value;
        }
        else if(value>=0)sum=value;
        if(value<0) sum=0;
      } 
      return maxSum;       
    }
}