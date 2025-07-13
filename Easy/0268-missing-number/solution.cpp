class Solution {
public:
    int missingNumber(vector<int>& nums) {
        const int n = nums.size();
        const int sum = accumulate(nums.begin(), nums.end(), 0);
        return (n * (n + 1)) / 2 - sum;
    }
};