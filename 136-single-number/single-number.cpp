// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int result = 0;
//         for(int i = 0; i< nums.size(); i++){
//             result ^= nums[i];
//         }
//         return result;
//     }
// };

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int num : nums){
            ans ^= num;
        }
        return ans;
    }
};
