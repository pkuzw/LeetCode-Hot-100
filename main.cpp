#include <iostream>
#include <vector>

#include <iostream>

#include "AddTwoNumbers.h"
using namespace std;

int main() {
    AddTwoNumbers atn;
    ListNode l1_2(9); // l1: 9->9->9; l2: 1
    ListNode l1_1(9, &l1_2);
    ListNode l1(9, &l1_1), l2(1);
    ListNode* result = atn.addTwoNumbers(&l1, &l2);
    return 0;
}
