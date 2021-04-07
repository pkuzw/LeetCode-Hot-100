#include <iostream>
#include "TrapRainWater.h"
using std::cout;
using std::endl;

int main() {
    TrapRainWater trw;
    vector<int> nums = {4,2,0,3,2,5};
    cout << trw.trap(nums) << endl;
    return 0;
}