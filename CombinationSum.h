//
// Created by zhaowei01 on 2021/3/29.
//

#ifndef LEETCODE_HOT_100_COMBINATIONSUM_H
#define LEETCODE_HOT_100_COMBINATIONSUM_H

#include <vector>
using std::vector;

class CombinationSum {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target);

private:
    void getCombination(vector<vector<int>>& combinations,
                        vector<int>& combination,
                        const vector<int>& candidates,
                        int target,
                        size_t& index);
};


#endif //LEETCODE_HOT_100_COMBINATIONSUM_H
