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
    ListNode* reverse(ListNode* head){
        ListNode* temp=NULL,*first;
        while(head){
            first=head->next;
            head->next=temp;
            temp=head;
            head=first;
        }
        return temp;
    }
    ListNode* doubleIt(ListNode* head) {
        ListNode* temp=reverse(head);
        head=temp;
        int rem=0;
        while(temp){
            rem=(temp->val*2+rem);
            temp->val=rem%10;
            rem/=10;
            if(!temp->next && rem!=0){
                temp->next = new ListNode(rem);
                break;
            }
            temp=temp->next;
        }
        
        return reverse(head);
    }
};