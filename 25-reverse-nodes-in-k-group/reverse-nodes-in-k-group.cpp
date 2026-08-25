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
        ListNode *temp=head;
        ListNode *front=temp->next;
        ListNode *prev=NULL;
        while(temp!=NULL)
        {
              ListNode *front=temp->next;
              temp->next=prev;
              prev=temp;
              temp=front;
              
        }return prev;
    }

    ListNode *kthnode(ListNode *head,int k){
        ListNode *temp=head;
        k=k-1;
        while(temp!=NULL &&k>0)
        {
            k--;
            temp=temp->next;
        }
        return temp;

    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head;
        ListNode *prevnode=NULL;
        ListNode *nextnode;
        while(temp!=NULL)
        {
           ListNode* knode=kthnode(temp,k);
           if(knode==NULL)
           {
            if(prevnode) prevnode->next=temp;
            break;
           }
           nextnode=knode->next;
           knode->next=NULL;
           reverse(temp);
           if(temp==head)
           {
            head=knode;
           }
           else{
            prevnode->next=knode;}
            prevnode=temp;
            temp=nextnode;
           

        }
        return head;

        
    }
};