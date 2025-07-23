class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (const int num : nums) {
            count[num]++;
        }

        vector<vector<int>> container(nums.size() + 1);
        for (const auto& pair : count) {
            container[pair.second].emplace_back(pair.first);
        }

        vector<int> ans;
        for (int i = container.size() - 1; i >= 0; i--) {
            for (const int num : container[i]) {
                if (ans.size() == k) {
                    return ans;
                }

                ans.push_back(num);
            }
        }

        return ans;
    }
};