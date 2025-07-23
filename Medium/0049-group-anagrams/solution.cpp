class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for (const string& str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            groups[key].push_back(str);
        }

        vector<vector<string>> ans;
        for (const auto& group : groups) {
            ans.emplace_back(group.second);
        }

        return ans;
    }
};