#include <iostream>
#include "CombinationSum.h"
using std::cout;
using std::endl;

int main() {
    CombinationSum cs;
    vector<int> nums = {2};
    int target = 7;
    vector<vector<int>> result = cs.combinationSum(nums, target);
    for (auto& i : result) {
        for (auto & j : i) {
            cout << j << ' ';
        }
        cout << endl;
    }
    return 0;
}