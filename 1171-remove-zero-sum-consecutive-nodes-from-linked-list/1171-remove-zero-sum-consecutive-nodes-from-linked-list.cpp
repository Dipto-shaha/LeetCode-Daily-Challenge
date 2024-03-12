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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* ans=head;
        int sum=0,i=1,j;
        vector<int>v={0},culmilative_sum={0};
        while(head){
            sum+=head->val;
            if(i>=v.size()){
                v.push_back(head->val);
                culmilative_sum.push_back(sum);
                i++;
            }
            else{
                v[i]=head->val;
                culmilative_sum[i]=sum;
                i++;
            }
            for(j=0;j<i-1;j++){
                if(culmilative_sum[i-1]-culmilative_sum[j]==0)
                {
                    i=j+1;
                    break;
                }
            }
            head=head->next;
        }
        if(i<=1) return NULL;
        head=ans;
        for(j=1;j<i;j++){
            head->val=v[j];
            if(j+1==i){
                head->next=NULL;
            }
            head=head->next;
        }        
        return ans;
    }
};