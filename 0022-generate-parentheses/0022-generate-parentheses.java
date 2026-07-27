class Solution {
    public void func(int open,int close, int n,String str,List<String>res)
    {
        if(open == n && close == n ){
        res.add(str);
        return;
        }
        else if(open > n) return ;
        else if(close>open)return ;
        func(open+1,close,n,str+"(",res);
        func(open,close+1,n,str+")",res);

    }
    public List<String> generateParenthesis(int n) {

        List<String> res=new ArrayList<>();
        func(0,0,n,"",res);
        return res;
    }
}