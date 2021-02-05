#include <iostream>
#include "ContainerWithMostWater.h"
using namespace std;

int main() {
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    ContainerWithMostWater cwm;
    int max_area = cwm.maxArea(height);
    cout << "max_area: " << max_area << endl;
    return 0;
}