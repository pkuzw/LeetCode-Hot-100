//
// Created by zhaowei01 on 2021/3/29.
//

#include <algorithm>

#include "CombinationSum.h"

void CombinationSum::getCombination(vector<vector<int>>& combinations,
                                    vector<int>& combination,
                                    const vector<int> &candidates,
                                    int target,
                                    size_t& index) {
    if (target == 0) {
        combinations.push_back(combination);
        return;
    }
    for (size_t i = index; i != candidates.size(); ++i) {
        if (target >= candidates[i]) {
            combination.push_back(candidates[i]);
            getCombination(combinations, combination, candidates, target - candidates[i], i);
            combination.pop_back();
            continue;
        }
        else {
            return;
        }
    }
}

vector<vector<int>> CombinationSum::combinationSum(vector<int>& candidates, int target) {
    std::sort(candidates.begin(), candidates.end());
    vector<vector<int>> combinations;
    vector<int> combination;
    size_t index = 0;
    getCombination(combinations, combination, candidates, target, index);
    return combinations;
}

