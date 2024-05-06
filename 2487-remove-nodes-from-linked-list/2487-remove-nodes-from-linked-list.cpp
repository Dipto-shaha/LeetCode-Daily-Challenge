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
    ListNode * reverse(ListNode* head){
        ListNode* temp=head,*first=NULL;
        while(head){
            temp=head->next;
            head->next=first;
            first=head;
            head=temp;
        }
        return first;
    }
    ListNode* removeNodes(ListNode* head) {
        ListNode* temp=reverse(head) ,*temp2;
        head=temp;
        int last=temp->val;
        while(temp){
            temp2=temp->next;
            while(temp2 &&  temp2->val < last){
                temp2=temp2->next;
            }
            temp->next=temp2;
            temp=temp->next;
            if(temp)
            last=temp->val;
        }
        return reverse(head);
    }
};