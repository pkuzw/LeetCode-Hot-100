//
// Created by zhaowei01 on 2021/1/31.
//

#include "AddTwoNumbers.h"

ListNode* AddTwoNumbers::addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* p1 = l1, *p2 = l2;
    int forward_digit = 0;
    vector<ListNode*> result_vec;
    while (p1 && p2) {
        int t = p1->val + p2->val + forward_digit;
        if (t >= 10) {
            forward_digit = 1;
            t %= 10;
        } else {
            forward_digit = 0;
        }
        ListNode* result_digit = new ListNode(t);
        result_vec.push_back(result_digit);
        p1 = p1->next;
        p2 = p2->next;
    }
    ListNode* p = p1;
    if (p1 == nullptr) {
        p = p2;
    }
    while (p) {
        int t = p->val + forward_digit;
        if (t >= 10) {
            forward_digit = 1;
            t %= 10;
        } else {
            forward_digit = 0;
        }
        ListNode* result_digit = new ListNode(t);
        result_vec.push_back(result_digit);
        p = p->next;
    }
    if (forward_digit == 1) {
        ListNode* add_new_digit = new ListNode(1);
        result_vec.push_back(add_new_digit);
    }
    for (auto i = result_vec.begin(); i != result_vec.end() - 1; ++i) {
        (*i)->next = *(i+1);
    }
    return result_vec.front();
}
