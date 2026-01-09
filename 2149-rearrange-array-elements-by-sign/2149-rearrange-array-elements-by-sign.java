class Solution {
    public int[] rearrangeArray(int[] nums) {
        //approach  1 by me worst 
        // int len=nums.length;
        // int []pa=new int[len/2];
        // int pc=0,nc=0;
        // int [] na=new int[len/2];
        // for(int i=0;i<nums.length;i++)
        // {
        //     if(nums[i]>0) pa[pc++]=nums[i];
        //     else na[nc++]=nums[i];
        // }
        // pc=0;
        // nc=0;
        // for(int i=0;i<nums.length;i++)
        // {
        //     if(i%2==0)nums[i]=pa[pc++];
        //     else nums[i]=na[nc++];
        // }
        // return nums;
        


//approach 2 by me 

     int [] arr=new int[nums.length];
     int pi=0,ni=1;
     for(int i=0;i<nums.length;i++)
     {
        if(nums[i]>0){
            arr[pi]=nums[i];
            pi+=2;
        }
        else {
            arr[ni]=nums[i];
            ni+=2;
        }
     }
     return arr;





    }
} 