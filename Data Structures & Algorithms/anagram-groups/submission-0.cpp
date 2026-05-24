class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramGroups;

        for (const string& s: strs) {
            // Create a key sorting the string
            string key = s;
            sort(key.begin(), key.end());

            // Add original string to its anagram group
            anagramGroups[key].push_back(s);
        }

        // Convert map values to result vector
        vector<vector<string>> result;
        for (auto& group : anagramGroups) {
            result.push_back(group.second);
        }

        return result;
    }
};
