class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
       vector<int>mpp(26,0);
        for(auto&x:chars)mpp[x-'a']++;
        int sum=0;
        for(auto&x:words)
        {
             vector<int>mpp1(26,0);
            for(auto&y:x)mpp1[y-'a']++;
            bool flag=false;
            for(int i=0;i<26;i++) if(mpp1[i]>mpp[i]){flag=true;break;}
            if(!flag)sum+=x.size();
        }
        return sum;
    }
};