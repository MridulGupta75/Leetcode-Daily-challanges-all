class Solution {
    public void fun(int []nums,int i,int size,List<Integer>subsol,List<List<Integer>>sol )
    {
    //    if(size<=i)return;
       if(size==i){
        sol.add(new ArrayList<>(subsol));
        return;
       }
     subsol.add(nums[i]);
     fun(nums,i+1,size,subsol,sol);
     subsol.remove(subsol.size()-1);
     fun(nums,i+1,size,subsol,sol);
    }
    public List<List<Integer>> subsets(int[] nums) {
        List<Integer>subsol=new ArrayList<>();
        List<List<Integer>>sol=new ArrayList<>();
        fun(nums,0,nums.length,subsol,sol);
        return sol;
    }
}