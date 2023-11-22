class Solution {
public:
   vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 2; i++) {
            int j = i + 1;
            int k = nums.size() - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (sum == 0) {
                    res.insert({nums[i], nums[j++], nums[k--]});
                }
                else if (sum > 0) {
                    k--;
                }
                else if (sum < 0) {
                    j++;
                }
            }
        }
        vector<vector<int>> result(res.begin(), res.end());
        return result;
    }
};