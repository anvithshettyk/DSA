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
    ListNode *findnode(ListNode *head,int k)
    {
        ListNode *temp=head;
        int cnt=1;
        if(k==0)
        {
            return temp;
        }
        while(cnt!=k)
        {
            cnt++;
            temp=temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *tail=head;
        ListNode *temp=head;
        int len=1;
        if(head==NULL||head->next==NULL)
        {
            return head;
        }
        while(tail->next!=NULL)
        {
            len++;
            tail=tail->next;
        }
        if(k%len==NULL) return head;
        k=k%len;
        ListNode *lastnode=findnode(head,len-k);
        tail->next=head;
        head=lastnode->next;
        lastnode->next=NULL;
        return head;



        
    }
};