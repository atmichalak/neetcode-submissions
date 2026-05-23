class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numToIndex; // value -> index mapping

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (numToIndex.count(complement)) {
                return {numToIndex[complement], i};
            }
            numToIndex[nums[i]] = i;
        }
        return {};
    }
};
