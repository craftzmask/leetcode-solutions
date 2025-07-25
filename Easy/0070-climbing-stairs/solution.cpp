class Solution {
public:
    int climbStairs(int n) {
        vector<long> steps = {1, 2};
        for (int i = 2; i <= n; i++) {
            steps.push_back(steps[i - 1] + steps[i - 2]);
        }
        return steps[n - 1];
    }
};