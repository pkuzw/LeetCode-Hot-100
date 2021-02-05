//
// Created by wayne on 2021/2/5.
//

#include "ContainerWithMostWater.h"

int ContainerWithMostWater::maxArea(vector<int> &height) {
    if (height.empty()) {
        return 0;
    }
    int max_area = 0;
    vector<int>::size_type l = 0, r = height.size() - 1;
    while (l < r) {
        int cur_area = (r - l) * min(height[l], height[r]);
        max_area = max_area < cur_area ? cur_area : max_area;
        if (height[l] <= height[r]) {
            ++l;
        } else {
            --r;
        }
    }
    return max_area;
}
