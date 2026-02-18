class Solution {
public:
    // int findDuplicate(vector<int>& nums) {
    //     long long n = nums.size();
    //     long long sum = n*(n+1)/2;
    //     long long square_sum = n*(n+1)*(2*n+1)/6;
    //     long long actual_sum = 0;
    //     long long actual_square_sum = 0;

    //     for(long long i : nums){
    //         actual_sum += i;
    //         actual_square_sum += i*i;
    //     }

    //     long long diff = actual_sum - sum;            //duplicate - missing
    //     long long sq_diff = actual_square_sum - square_sum;  // dup**2 - miss**2 = (dup + miss)(dup - miss)

    //     long long dup_miss = sq_diff/diff ;             //duplicate + missing
    //     long long x = (dup_miss + diff ) / 2;                // duplicate
    //     long long y = dup_miss - x;

    //     return y;                       ////math collapses and diff = 0.Then division by zero → runtime error.
    // }
    int findDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int index = abs(nums[i]);
            if(nums[index] < 0)
                return index;
            nums[index] = -nums[index];
        }
        return -1;
    }
};