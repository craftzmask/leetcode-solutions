class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_set<int> num_set(nums.begin(), nums.end());
        vector<int> ans;
        for (int i = 1; i < nums.size() + 1; i++) {
            if (!num_set.count(i)) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};