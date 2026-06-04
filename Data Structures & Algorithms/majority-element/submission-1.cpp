class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> freqs;

        int candidate;
        int counter = 0;

        for (int num : nums) {
            if (counter == 0) {
                candidate = num;
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