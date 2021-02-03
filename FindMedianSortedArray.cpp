//
// Created by wayne on 2021/2/4.
//

#include "FindMedianSortedArray.h"

double FindMedianSortedArray::findMedianSortedArrays(vector<int>& nums1,
                                                     vector<int>& nums2) {
    vector<int> merged_nums;
    auto iter1 = nums1.begin(), iter2 = nums2.begin();
    while (iter1 != nums1.end() && iter2 != nums2.end()) {
        if (*iter1 <= *iter2) {
            merged_nums.push_back(*iter1++);
        } else {
            merged_nums.push_back(*iter2++);
        }
    }
    if (iter1 != nums1.end()) {
        merged_nums.insert(merged_nums.end(), iter1, nums1.end());
    } else {
        merged_nums.insert(merged_nums.end(), iter2, nums2.end());
    }
    double result = 0;
    if (merged_nums.size() % 2) {
        result = merged_nums[merged_nums.size() / 2];
    } else {
        result = double(merged_nums[(merged_nums.size() - 1) / 2] +
                merged_nums[merged_nums.size() / 2]) / 2;
    }
    return result;
}
