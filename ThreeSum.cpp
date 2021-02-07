//
// Created by zhaowei01 on 2021/2/7.
//

#include <algorithm>
#include "ThreeSum.h"

vector<vector<int>> ThreeSum::threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    if (nums.size() < 3 || nums.front() > 0) {
        return result;
    }
    for (auto i = 0; i < nums.size(); ++i) {
        if (i > 0 && nums[i-1] == nums[i]) {
            continue;
        }
        auto j = i + 1;
        auto k = nums.size() - 1;
        while (j < k) {
            if (j > i + 1 && nums[j-1] == nums[j]) {
                ++j;
                continue;
            }
            if (nums[i] + nums[j] + nums[k] == 0) {
                vector<int> tmp = {nums[i], nums[j], nums[k]};
                result.push_back(tmp);
                ++j;
            } else if (nums[i] + nums[j] + nums[k] < 0) {
                ++j;
            } else {
                --k;
            }
        }
    }
    return result;
}
