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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
        {
            return head;
        }
        ListNode* prev=nullptr;
        ListNode* first=head;
        ListNode* sec=head->next;
        head=sec;
        while(first!=nullptr && sec!=nullptr)
        {
            first->next=sec->next;
            sec->next=first;
             if(prev != nullptr)
            {
                prev->next = sec;
            }
            prev=first;
            first=first->next;

            if(first!=nullptr)
            {
                sec=first->next;
            }
            
        }
        return head;
    }
};