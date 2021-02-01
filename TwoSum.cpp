//
// Created by zhaowei01 on 2021/1/31.
//

#include "TwoSum.h"

vector<int> TwoSum::twoSum(vector<int>& nums, int target) {
    vector<int> result = {};
    for (int i = 0; i < nums.size() - 1; ++i) {
        for (int j = i + 1; j < nums.size(); ++j) {
            if (nums.at(i) + nums.at(j) == target) {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return result;
}

