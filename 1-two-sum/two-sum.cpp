class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for(int i =0 ; i< nums.size();i++){
        //     for(int j = i+1 ; j<nums.size();j++){
        //         if(i == j){
        //             continue;
        //         }
        //         else if(nums[i] + nums[j] == targett){
        //             return {i, j};
        //         }
        //     }
        // }
        // return {};



        //TWO POINTERS APPROACH
        // sort(nums.begin(), nums.end());
        // int i = 0;
        // int j = nums.size()-1;
        // while(i < j){
        //     int sum = nums[i]+nums[j];

        //     if(sum == target){
        //         return {i,j};
        //     }
        //     else if(sum < target){
        //         i++;
        //     }
        //     else{
        //         j--;
        //     }
        // }


        // USING HASHING
        unordered_map<int, int> mp;  // value -> index

        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if(mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

        mp[nums[i]] = i;
    }

    return {};

    }
};