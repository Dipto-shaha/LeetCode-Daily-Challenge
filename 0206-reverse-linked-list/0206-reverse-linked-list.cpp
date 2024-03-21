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
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* first=head->next, * second;
        head->next=NULL;
        while(1){
            if(!first) return head ;
            second=first->next;
            first->next=head;
            head=first;
            first=second;
            
        }
        return NULL;
    }
};