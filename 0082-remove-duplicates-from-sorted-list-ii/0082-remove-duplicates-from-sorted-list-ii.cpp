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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
        {
             return head;
        }
        map<int , int> mp;
        ListNode* temp=head;
        ListNode* dummy=new ListNode(0);
        ListNode* newhead=dummy;
        while(temp!=nullptr)
        {
            mp[temp->val]++;
            temp=temp->next;
        }
        temp=head;
        ListNode* curr=head;
        while(temp!=nullptr)
        {
            if(mp[temp->val]==1)
            {
               dummy->next=temp;
                dummy=dummy->next;
                
            }
            temp=temp->next;
          
        }
        dummy->next=nullptr;
        return newhead->next;
    }
};