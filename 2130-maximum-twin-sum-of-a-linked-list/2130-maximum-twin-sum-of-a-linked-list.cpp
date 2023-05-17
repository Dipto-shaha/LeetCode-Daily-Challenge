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
    int pairSum(ListNode* head) {
        ListNode* fast=head->next,*slow=head,*temp,*prev=NULL;
        int ans=0;
        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        slow=slow->next;
        while(slow->next)
        {
            temp=slow->next;
            slow->next=prev;
            prev=slow;
            slow=temp;
        }
        slow->next=prev;
        while(slow)
        {
            ans=max(ans,slow->val+head->val);
            slow=slow->next;
            head=head->next;
        }
        return ans;
        
    }
};