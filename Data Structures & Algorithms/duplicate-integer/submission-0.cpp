class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uniqueNumbers;

        for (int num : nums) {
            if (uniqueNumbers.find(num) != uniqueNumbers.end()) {
                return true;
            }

            uniqueNumbers.insert(num);
        }

        return false;
    }
};
