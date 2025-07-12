class Solution {
    protected void swap(int []nums,int a,int b)
    {           nums[a]=nums[a]^nums[b];
                nums[b]=nums[a]^nums[b];
                nums[a]=nums[a]^nums[b]; 
    }
    public void sortColors(int[] nums) {
        int left =0,high =nums.length-1,mid=0;
         while(mid<=high)
         {
            if(nums[mid]==0 && mid!=left){
                swap(nums,left,mid);
                left++;
            }
            else if(nums[mid]==2 && mid!=high){
                swap(nums,high,mid);
                high--;
            }
            else mid++;
         }
        
    }
}