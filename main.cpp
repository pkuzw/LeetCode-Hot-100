#include <iostream>
#include <vector>

#include "AddTwoNumbers.h"
using namespace std;

int main() {
    AddTwoNumbers atn;
    ListNode l1_2(7), l2_2(4); // l1: 7->8->1; l2: 4->5->2
    ListNode l1_1(8, &l1_2), l2_1(5, &l2_2);
    ListNode l1(1, &l1_1), l2(2, &l2_1);
    ListNode* result = atn.addTwoNumbers(&l1, &l2);
    return 0;
}
