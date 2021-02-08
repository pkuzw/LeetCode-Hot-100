//
// Created by wayne on 2021/2/7.
//

#include "ThreeSum.h"

vector<vector<int>> ThreeSum::threeSum(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    if (nums.size() < 3 || nums.front() > 0) {
        return result;
    }
    for (auto i = 0; i < nums.size() - 2; ++i) {
        auto j = i + 1;
        auto k = nums.size() - 1;
        while (j < k) {
            if (nums[i] + nums[j] + nums[k] == 0) {
                vector<int> tmp = {nums[i], nums[j], nums[k]};
                result.push_back(tmp);
                ++j;
            }
            if (nums[i] + nums[j] + nums[k] < 0) {
                ++j;
            }
            if (nums[i] + nums[j] + nums[k] > 0) {
                int third_val = nums[k];
                while (nums[k] == third_val) {
                    --k;
                }
            }
        }
    }
    auto unq_iter = unique(result.begin(), result.end());
    return vector<vector<int>>(result.begin(), unq_iter);
}
