class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int num : nums)
            mp[num]++;

        int longest = 0;

        for(auto it : mp){
            if(mp.count(it.first + 1) > 0){
                longest = max(longest, it.second + mp[it.first + 1]);
            }
        }

        return longest;
    }
};