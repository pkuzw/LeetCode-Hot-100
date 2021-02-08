//
// Created by wayne on 2021/2/8.
//

#include "RemoveNthNodeFromEndList.h"

ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* pre_head = new ListNode(0, head);
    ListNode* post_n = head;
    for (auto i = 0; i != n; ++i) {
        post_n = post_n->next;
    }
    ListNode* iter = head;
    while (post_n && post_n->next) {
        iter = iter->next;
        post_n = post_n->next;
    }
    if (post_n) {
        iter->next = iter->next->next;
    } else {
        pre_head->next = iter->next;
    }
    return pre_head->next;
}
