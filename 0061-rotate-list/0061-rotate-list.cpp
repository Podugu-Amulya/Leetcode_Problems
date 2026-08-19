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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr)
        {
            return head;
        }
        ListNode* temp=head;
        int c=0;
        while(temp!=nullptr)
        {
             c++;
             temp=temp->next;
        }
        k=k%c;
        if(k==0)
        {
            return head;
        }
        int p=c-k-1;
        c=0;
        temp=head;
        while(c!=p)
        {
            c++;
            temp=temp->next;
        }
        
        ListNode* newhead=temp->next;
        temp->next=nullptr;
        ListNode* newtail=newhead;
        while(newtail->next!=nullptr)
        {
            newtail=newtail->next;
        }
        newtail->next=head;

        return newhead;
        
    }
};