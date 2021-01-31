//
// Created by zhaowei01 on 2021/1/31.
//

#ifndef LEETCODE_HOT_100_ADDTWONUMBERS_H
#define LEETCODE_HOT_100_ADDTWONUMBERS_H

#include <vector>

using namespace std;

/**
 * Definition for singly-linked list.
**/
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class AddTwoNumbers {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};

#endif //LEETCODE_HOT_100_ADDTWONUMBERS_H
