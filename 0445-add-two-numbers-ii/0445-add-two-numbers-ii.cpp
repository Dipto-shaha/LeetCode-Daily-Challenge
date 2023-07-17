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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>st1,st2,ans;
        int temp=0;
        while(l1)
        {
            st1.push(l1->val);
            l1=l1->next;
        }
        while(l2)
        {
            st2.push(l2->val);
            l2=l2->next;
        }
        while(!st1.empty() || !st2.empty() || temp!=0)
        {
            if(!st1.empty())
            {
                temp+=st1.top();
                st1.pop();
            }
            if(!st2.empty())
            {
                temp+=st2.top();
                st2.pop();
            }
            ans.push(temp%10);
            temp/=10;
        }
        ListNode *x=new ListNode(0),*head;
        head=x;
        while(!ans.empty())
        {
            x->val=ans.top();
            ans.pop();
            if(!ans.empty()){
            x->next=new ListNode();
            x=x->next;}
        } 
        return head;
    }
};