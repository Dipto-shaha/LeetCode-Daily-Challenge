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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head,*ans=head;
        int cnt=0;
        while(head){
            head= head->next;
            cnt++;
            if(cnt-1>n) temp=temp->next;
        }
        if(cnt==1) return NULL;
        else if(cnt==n) return ans->next;
        temp->next = temp->next ? temp->next->next : NULL ;        
        return ans;
    }
};