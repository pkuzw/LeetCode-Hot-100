//
// Created by zhaowei01 on 2021/3/23.
//

#include "SearchRotatedSortedArray.h"

int SearchRotatedSortedArray::search(vector<int>& nums, int target) {
    size_t l = 0, r = nums.size() - 1;
    while (l <= r) {
        auto mid = (l + r) / 2;
        if (target == nums[mid]) return mid;
        if (nums[0] <= nums[mid]) {
            if (target >= nums[0] && target < nums[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        else {
            if (target > nums[mid] && target <= nums.back()) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
    }
    return -1;
}
