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
    int getDecimalValue(ListNode* head) {
    
        string st="";
        while(head)
        {
            st=st+to_string(head->val);
            head=head->next;
        }
        reverse(st.begin(),st.end());
        int s=0;
        for(int i=0;i<st.size();i++)
        {
           s=s+(pow(2,i)*(st[i]-'0'));
        }

        return s;
    }
};