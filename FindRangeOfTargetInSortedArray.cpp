//
// Created by wayne on 2021/3/25.
//

#include "FindRangeOfTargetInSortedArray.h"

int FindRangeOfTargetInSortedArray::binarySearch(vector<int>& nums, int target, bool left_bound) {
    int left = 0, right = nums.size() - 1, rslt = nums.size();
    while (left <= right) {
        auto mid = (left + right) / 2;
        if (target < nums[mid] || (left_bound && target <= nums[mid])) {
            right = mid - 1;
            rslt = mid;
        } else {
            left = mid + 1;
        }
    }
    return rslt;
}

vector<int> FindRangeOfTargetInSortedArray::searchRange(vector<int>& nums, int target) {
    auto left_bound = binarySearch(nums, target, true);
    auto right_bound = binarySearch(nums, target, false) - 1;
    vector<int> range;
    if (left_bound <= right_bound && right_bound < nums.size() && target <= nums[right_bound] && target >= nums[left_bound]) {
        range.push_back(left_bound);
        range.push_back(right_bound);
    } else {
        range.push_back(-1);
        range.push_back(-1);
    }
    return range;
}