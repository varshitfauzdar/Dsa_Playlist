class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size();
        vector<unordered_map<int,int>> dp(n);
        int ans = 0;

        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                int diff = nums[i] - nums[j];

                int len = 1;
                if(dp[j].count(diff))
                    len = dp[j][diff];

                dp[i][diff] = len + 1;
                ans = max(ans, dp[i][diff]);
            }
        }

        return ans;
    }
};