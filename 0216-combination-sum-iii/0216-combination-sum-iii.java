class Solution {
    public void combinationSum(int n,List<List<Integer>> result,List<Integer>currRes,int k,int currSum,int iterator)
    {
        if(currRes.size() > k || currSum > n || iterator > 10 )return;
        if(currRes.size() == k && currSum == n)
        {
            result.add(new ArrayList<>(currRes));
            return ;
        }
        combinationSum(n,result,currRes,k,currSum,iterator+1);
        currRes.add(iterator);
        combinationSum(n,result,currRes,k,currSum+iterator,iterator+1);
        currRes.remove(currRes.size()-1);
    }
    public List<List<Integer>> combinationSum3(int k, int n) {
        List<Integer> currRes=new ArrayList<>();
        List<List<Integer>> result=new ArrayList<>();
        combinationSum(n,result,currRes,k,0,1);
        return result;
    }
}