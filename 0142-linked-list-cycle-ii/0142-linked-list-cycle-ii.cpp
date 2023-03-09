/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<ListNode*,int>m;
    int i=1;
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return NULL;
        if(m[head]!=0) return head;
        m[head]=i;
        return detectCycle(head->next);

    }
};