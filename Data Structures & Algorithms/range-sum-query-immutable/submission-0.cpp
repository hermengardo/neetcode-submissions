class NumArray {
    vector<int> nums;
public:
    NumArray(vector<int>& nums) {
        prefixSum(nums);
        this->nums = nums;
    }

    void prefixSum(vector<int>& nums) {
        int cummulative_sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            cummulative_sum += nums[i];
            nums[i] = cummulative_sum;
        }
    }
    
    int sumRange(int left, int right) {
        if (left-1 < 0) {
            return this->nums[right];    
        }

        return this->nums[right] - this->nums[left - 1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */