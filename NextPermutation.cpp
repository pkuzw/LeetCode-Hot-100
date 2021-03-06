//
// Created by wayne on 2021/2/24.
//

#include <algorithm>
#include "NextPermutation.h"

using namespace std;

void NextPermutation::nextPermutation(vector<int>& nums) {
    auto i = nums.size() - 1;
    auto j = i - 1;
    while (i >= 1) {
        j = i - 1;
        if (nums[j] < nums[i]) {
            break;
        }
        --i;
    }
    i = nums.size() - 1;
    while (i > j) {
        if (nums[i] > nums[j]) {
            swap(nums[i], nums[j]);
            break;
        }
        --i;
    }
    if (i == 0) {
        reverse(nums.begin(), nums.end());
    } else {
        reverse(nums.begin() + j + 1, nums.end());
    }
}