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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size()-1,i=1;
        ListNode *ans=new ListNode(),*ptr1,*temp,*temp2;
        if(n>=0) ans=lists[0];
        else ans=nullptr;
        while(i<=n)
        {
            ptr1=lists[i];
            temp=ans;
            bool flag=false;
            while(ptr1)
            {
                if(!ans)
                {
                    ans=ptr1;
                    break;
                }
                while( ans && ans->val <ptr1->val)
                {
                    if(!ans->next)
                    {
                        ans->next=ptr1;
                        flag=true;
                        break;
                    }
                    ans=ans->next;
                }
                if(!flag)
                {
                    ListNode *x = new ListNode();
                    x->val=ptr1->val;
                    swap(ans->val,x->val);
                    temp2=ans->next;
                    ans->next=x;
                    x->next=temp2;
                    ans=x;

                }
                else break;
                ptr1=ptr1->next;
            }
            if(temp)
            ans=temp;
            i++;
        }
        return ans;
        
    }
};