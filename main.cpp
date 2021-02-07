#include <iostream>
#include "ThreeSum.h"
using namespace std;

int main() {
    vector<int> nums = {-6, -1, -1, 0, 1, 2, 3, 3, 4};
    ThreeSum ts;
    auto rslt = ts.threeSum(nums);
    for (auto &i : rslt) {
        for (auto &j : i) {
            cout << j << ' ';
        }
        cout << endl;
    }

    return 0;
}