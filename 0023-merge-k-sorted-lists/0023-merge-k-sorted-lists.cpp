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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> nums;
        for(int i=0;i<lists.size();i++)
        {
            ListNode* temp=lists[i];
            while(temp!=nullptr)
            {
                nums.push_back(temp->val);
                temp=temp->next;
            }
        }

        sort(nums.begin(),nums.end());

        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        for(int i=0;i<nums.size();i++)
        {
            temp->next=new ListNode(nums[i]);
            temp=temp->next;
        }
        return dummy->next;
    }
};