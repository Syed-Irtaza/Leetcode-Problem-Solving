class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int length = nums.size();
        vector<int> runSum(length);
        int sum=0;
        runSum[0]=nums[0];

        for(int i = 0; i<length-1; i++){


            sum = runSum[i]+nums[i+1];
            runSum[i+1]=sum;
        }

        return runSum;


    }
};