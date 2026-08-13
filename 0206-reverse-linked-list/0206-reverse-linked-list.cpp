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
    ListNode* reverseList(ListNode* head) {
        if(!head) return nullptr;
        if(!head->next) return head;
        stack<int> st;
        ListNode* temp=head;
        while(temp!=nullptr)
        {   
           
            st.push(temp->val);
             temp=temp->next;
        }
        ListNode* t=head;
        while(t!=nullptr)
        {   
            t->val=st.top();
            st.pop();
            t=t->next;
            
        }    
        return head;
        
    }
};