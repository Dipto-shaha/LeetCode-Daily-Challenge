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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head,*first,*second=head;
        int cnt=1;
        while(temp!=NULL)
        {
            if(cnt==k) first=temp;
            if(cnt>k) second=second->next;
            temp=temp->next;
            cnt++;
        }
        cnt=first->val;
        first->val=second->val;
        second->val=cnt;
        return head;
    }
};