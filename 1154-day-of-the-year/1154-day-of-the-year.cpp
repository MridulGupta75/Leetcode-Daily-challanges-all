class Solution {
public:
    int dayOfYear(string date) {
        vector<int>mth{31,28,31,30,31,30,31,31,30,31,30,31};
        int y=stoi(date.substr(0,4)),m=stoi(date.substr(5,7)), d=stoi(date.substr(8)), ans=0,i=0;
        if(y%4==0&&y%100!=0||y%400==0) if(m>2)d++;
        m--;
        while(m--) ans+=mth[i++];
        ans+=d;
        
        return ans;
    }
};