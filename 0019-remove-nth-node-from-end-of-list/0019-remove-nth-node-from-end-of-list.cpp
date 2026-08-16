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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int c=0;
        ListNode* curr=head;
        while(curr!=nullptr)
        {
            c++;
            curr=curr->next;
        }
        int p=(c-n)-1;
        if(p==-1)
        {
          ListNode* temp=head;
          head=temp->next;
          delete temp;
          return head;
        
        }
        c=0;
        curr=head;
        while(c!=p)
        {
            c++;
            curr=curr->next;
        }
        ListNode* temp=curr->next;
        curr->next=curr->next->next;
        delete temp;
        return head;

    }
};