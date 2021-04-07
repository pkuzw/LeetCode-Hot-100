//
// Created by zhaowei01 on 2021/4/6.
//
#include <algorithm>

#include "TrapRainWater.h"

using std::min;

int TrapRainWater::trap(vector<int> &height) {
    if (height.size() < 3) { //处理边界情况
        return 0;
    }
    const auto& n = height.size();
    vector<int> left_max(n, 0), right_max(n, 0);
    left_max[0] = height[0];
    right_max[n-1] = height[n-1];
    for (int i = 1; i != n; ++i) {
        if (height[i] > left_max[i-1]) {
            left_max[i] = height[i];
        } else {
            left_max[i] = left_max[i-1];
        }
    }
    for (int i = n - 2; i >= 0; --i) { //此处不可以使用auto，会导致下溢死循环
        if (height[i] > right_max[i+1]) {
            right_max[i] = height[i];
        } else {
            right_max[i] = right_max[i+1];
        }
    }
    int total_water = 0;
    for (auto i = 1; i != n-1; ++i) {
        total_water += min(left_max[i], right_max[i]) - height[i];
    }
    return total_water;
}
