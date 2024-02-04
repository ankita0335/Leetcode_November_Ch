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
        ListNode* ptr=head;
        vector<int>v;
        while(ptr!=nullptr)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;
        }
        reverse(v.begin(),v.end());
        ListNode* dummy=new ListNode(0);
        ptr=dummy;
        for(auto i:v)
        {
            ptr->next=new ListNode(i);
            ptr=ptr->next;
        }
        return dummy->next;
    }
};