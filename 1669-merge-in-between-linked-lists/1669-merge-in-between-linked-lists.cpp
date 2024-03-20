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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int cnt=0;
        ListNode* ans=list1,*temp;
        while(list1){
            cnt++;
            if(cnt==a){
                temp=list1;
                //cout<<temp->val<<" ";
            }
            else if(cnt-1==b){
                temp->next=list2;
                temp=list1->next;
                //cout<<temp->val<<" ";
                break;
            }
            list1=list1->next;
        }
        while(list2){
            
            if(list2->next==NULL) {
                list2->next=temp; 
                break;
            }
            list2=list2->next;
        }
        return ans;
    }
};