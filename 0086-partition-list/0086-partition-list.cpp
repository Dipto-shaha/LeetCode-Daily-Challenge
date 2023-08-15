/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* temp=head;
        vector<int>v1,v2;
        while(head)
        {
            if(head->val<x)
                v1.push_back(head->val);
            else v2.push_back(head->val);
            head=head->next;
        }
        head=temp;
        for(auto u:v1)
        {
            temp->val=u;
            temp=temp->next;
        }
        for(auto u:v2)
        {
            temp->val=u;
            temp=temp->next;
        }
        return head;
    }
};