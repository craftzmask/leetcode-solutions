class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set(nums.begin(), nums.end());
        
        int ans = 0;
        for (const int n : num_set) {
            if (!num_set.count(n - 1)) {
                int streak = 0;
                while (num_set.count(n + streak)) {
                    streak++;
                }

                ans = max(ans, streak);
            }
        }

        return ans;
    }
};