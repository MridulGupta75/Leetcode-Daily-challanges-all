class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       int k5=0,k10=0,k20=0;
        if(bills[0]>5)return false;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)k5++;
            
            else if(bills[i]==10)
            {
                if(k5>=1)k5--;
                else return false;
                k10++;
            }
            else
            {
                if((k10>=1&&k5>=1))k5--,k10--;
                else if((k5>=3))k5-=3; 
                else return false;
                k20++;
            }
        }
        return true;
    }
};