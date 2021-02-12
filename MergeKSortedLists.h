//
// Created by 86138 on 2021/2/12.
//

#ifndef LEETCODE_HOT_100_MERGEKSORTEDLISTS_H
#define LEETCODE_HOT_100_MERGEKSORTEDLISTS_H

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

class MergeKSortedLists {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists);

};


#endif //LEETCODE_HOT_100_MERGEKSORTEDLISTS_H
