class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate;
        int counter = 0;
        int k = std::floor(std::size(nums) / 2);

        for (int num : nums) {
            if (counter == 0) {
                candidate = num;
            }

            if (counter > k) {
                return candidate;
            }

            if (num == candidate) {
                counter++;
            } else {
                counter--;
            }
        }

        return candidate;
    }
};