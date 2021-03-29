//
// Created by zhaowei01 on 2021/3/29.
//

#include <algorithm>

#include "CombinationSum.h"

void CombinationSum::getCombination(vector<int>& combination, const vector<int> &candidates, int target) {
    if (target < candidates[0]) {
        return;
    }
    for (auto& k : candidates) {
        if (target >= k) {
            combination.push_back(k);
            getCombination(combination, candidates, target - k)
        }

    }


}

vector<vector<int>> CombinationSum::combinationSum(vector<int>& candidates, int target) {
    std::sort(candidates.begin(), candidates.end());
    vector<vector<int>> combinations;


}

