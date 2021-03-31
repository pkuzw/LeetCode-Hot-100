//
// Created by zhaowei01 on 2021/3/29.
//

#include <algorithm>

#include "CombinationSum.h"

void CombinationSum::getCombination(vector<vector<int>>& combinations, vector<int>& combination, const vector<int> &candidates, int target) {
    if (target == 0) {
        combinations.push_back(combination);
        return;
    }
    for (auto& k : candidates) {
        if (target >= k) {
            combination.push_back(k);
            getCombination(combinations, combination, candidates, target - k);
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
    getCombination(combinations, combination, candidates, target);
    return combinations;
}

