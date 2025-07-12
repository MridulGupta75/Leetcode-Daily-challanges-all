class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer>mpp=new HashMap<>();
        int arr[]=new int[2];
        for(int i=0;i<nums.length;i++)
        {
            int find=target-nums[i];
            if(mpp.containsKey(find)) {
                arr[0]=i;
                arr[1]=mpp.get(find);
            }
          mpp.put(nums[i],i);
        }
       return arr;


    }
}