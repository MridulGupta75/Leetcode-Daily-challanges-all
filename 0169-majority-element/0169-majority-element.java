class Solution {
    public int majorityElement(int[] nums) {
       int sum =1,majorityElement=nums[0];
       for(int i=1;i<nums.length;i++)
       {

              if(0==sum) 
              {
                majorityElement=nums[i];
                sum++;
              }
              else if(majorityElement==nums[i])
              {
                sum++;
              }
              else{
                sum--;
              }

       }
       return majorityElement;
        
    }
}