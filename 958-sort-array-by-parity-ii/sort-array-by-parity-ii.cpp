class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n = nums.size();
        int odd = 1, even = 0;
        vector<int> result(n);
        for(int i = 0 ; i<n; i++){
            if(nums[i]%2 == 0){         //even at even places
                result[even] = nums[i];
                even+=2;
            }
            else{                      //odd at odd places
                result[odd] = nums[i];
                odd += 2;
            }

        }
        return result;
    }
};