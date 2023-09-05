/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL) return NULL;
        Node *temp=head,*temp2;
        Node *newHead=new Node(0),*ans;
        ans=newHead;
        int cnt=0;
        vector<Node*>v;
        while(head)
        {
            newHead->val=head->val;
            head->val=cnt;
            cnt++;
            v.push_back(newHead);
            head=head->next;
            if(head)
            {
                temp2=new Node(0);
                newHead->next=temp2;
                newHead=temp2;
            }
        }
        newHead=ans;
        while(temp)
        {
            if(temp->random)
            {
                cnt=temp->random->val;
                newHead->random=v[cnt];
            }
            //temp->val=newHead->val;
            temp=temp->next;
            newHead=newHead->next;
        }
        return ans;
    }
};