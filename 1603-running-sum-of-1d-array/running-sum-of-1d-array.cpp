class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runSum(nums.size());
        int sum = 0;
        runSum[0] = nums[0];

        for (int i = 0; i < nums.size() - 1 ; i++) {

            sum = runSum[i] + nums[i + 1];
            runSum[i + 1] = sum;
        }

        return runSum;
    }
};

// can be solved using in-place array conversion

// algo = nums[i]=nums[i]+nums[i-1] or nums[i]+=nums[i-1];