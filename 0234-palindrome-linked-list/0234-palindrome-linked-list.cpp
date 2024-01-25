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
    bool ispal(vector<int>v){
        int i=0,j=v.size()-1;
        while(i<j){
            if(v[i]!=v[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(ListNode* head) {
        vector<int>v;
        ListNode* ptr=head;
        while(ptr!=nullptr)
        {
            v.push_back(ptr->val);
            ptr=ptr->next;        
        }
        return ispal(v);
    }
};