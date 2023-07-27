class Solution {
public:
    int maxJump(vector<int>& stones) {
        int a = stones[1] - stones[0];
        for(int i = 2; i < stones.size(); i++){
            int ans = stones[i]  - stones[i - 2];
            a = max(a, ans);
        }
        return a;
    }
};