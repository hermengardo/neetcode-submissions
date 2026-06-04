class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int k = std::floor(std::size(nums) / 2);
        std::unordered_map<int, int> freqs;

        for (int num : nums) {
            freqs[num] += 1;
            if (freqs[num] > k) {
                return num;
            }
        }

        return -1;
    }
};