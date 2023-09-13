class Solution {
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
       HashMap<Integer,Integer>l1=new HashMap<>();
        Stack<Integer>st=new Stack<>();
       
         for(int i=nums2.length-1;i>=0;i--)
         {
                 while(!st.empty()&&st.peek()<nums2[i])st.pop();
                  if(st.empty())l1.put(nums2[i],-1);
                  else l1.put(nums2[i],st.peek());
              st.push(nums2[i]);
             
         }
        int sol[]=new int [nums1.length];
        for(int i=0;i<nums1.length;i++)
        {
            sol[i]=l1.get(nums1[i]);
        }
        return sol;
    }
}