class Solution {
    public String maxSumOfSquares(int num, int sum) {
        int pos=0;
        char arr[]=new char[num];
        while(sum>=0 && pos<num)
        {
            if(sum>9){
                arr[pos++]='9';
                sum-=9;
            }else if(sum==0) arr[pos++]='0';
            else {
                arr[pos++]=Character.forDigit(sum, 10);
                sum=0;
            }

        }
        if(sum==0)
        return new String(arr);   
        return "";  
    }
}