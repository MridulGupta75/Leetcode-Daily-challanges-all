class Solution {
private:
    const int MOD=1e9+7;
    long solve(int&n,int &goal,int &k,int count_song,int c_unique_song, vector<vector<long>>&dp)
    {
        if(goal==count_song)
        {
            if(n==c_unique_song)return 1;
            return 0;
        }
        if(dp[count_song][c_unique_song]!=-1)return dp[count_song][c_unique_song];
         long long res=0;
        if(n-c_unique_song>0)
        res+=(n-c_unique_song)*solve(n,goal,k,count_song+1,c_unique_song+1,dp);
        if(c_unique_song-k>0)
        res+=(c_unique_song-k)*solve(n,goal,k,count_song+1,c_unique_song,dp);
        return dp[count_song][c_unique_song]=res%MOD;
    }
public:
    int numMusicPlaylists(int n, int goal, int k) {
        vector<vector<long>>dp(101,vector<long>(101,-1));
        return (int)solve(n,goal,k,0,0,dp);
    }
};