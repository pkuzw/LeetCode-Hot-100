//
// Created by zhaowei01 on 2021/1/31.
// Modified by zhaowei01 on 2021/2/1.
//

#include "AddTwoNumbers.h"

ListNode* AddTwoNumbers::addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *head1 = l1;
    ListNode *n1 = l1, *n2 = l2;
    ListNode *prev1 = l1, *prev2 = l2;
    int forward_digit = 0;
    while (n1 && n2) {
        n1->val = n1->val + n2->val + forward_digit;
        if (n1->val >= 10) {
            n1->val %= 10;
            forward_digit = 1;
        } else {
            forward_digit = 0;
        }
        prev1 = n1;
        prev2 = n2;
        n1 = n1->next;
        n2 = n2->next;
    }
    ListNode* p_rest = n1;
    if (n1) {
        p_rest = n1;
    }
    if (n2){
        p_rest = n2;
        prev1->next = n2;
    }
    while (p_rest) {
        p_rest->val = p_rest->val + forward_digit;
        if (p_rest->val >= 10) {
            p_rest->val %= 10;
            forward_digit = 1;
        } else {
            forward_digit = 0;
        }
        prev1 = p_rest;
        p_rest = p_rest->next;
    }
    if (forward_digit == 1) {
        ListNode* result_tail = new ListNode(1);
        prev1->next = result_tail;
    }
    return head1;
}
