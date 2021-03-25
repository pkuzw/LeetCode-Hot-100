//
// Created by wayne on 2021/3/25.
//

#ifndef LEETCODE_HOT_100_FINDRANGEOFTARGETINSORTEDARRAY_H
#define LEETCODE_HOT_100_FINDRANGEOFTARGETINSORTEDARRAY_H

#include <vector>

using std::vector;

class FindRangeOfTargetInSortedArray {
public:
    vector<int> searchRange(vector<int>& nums, int target);

private:
    int binarySearch(vector<int>& nums, int target, bool left_bound);
};


#endif //LEETCODE_HOT_100_FINDRANGEOFTARGETINSORTEDARRAY_H
