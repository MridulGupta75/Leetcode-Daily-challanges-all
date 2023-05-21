class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int i=1;
        // int str=1;
  while(1)
   {
      int sum=i;
      bool flag=false;
     for(auto&x:nums)
     {
         
        sum+=x;
         if(sum<1)
         {
             flag=true;
             break;
         }
         
         
         
     }
      if(flag==true)
     i++;
      if(flag==false)break;
      
      
   }
      return i;  
    }
};