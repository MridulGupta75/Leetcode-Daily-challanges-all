class Solution {
    public int sumOfSquares(int[] nums) {
        int size=nums.length;
        int sum =0;
        for(int i=0;i<size;i++)
        {
            if (size%(i+1)==0)sum+=nums[i]*nums[i];
        }
        return sum;
    }
}