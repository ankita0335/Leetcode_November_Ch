class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr)
            return nullptr;

        vector<int> v;
        ListNode* ptr = head;

        while (ptr != nullptr) {
            v.push_back(ptr->val);
            ptr = ptr->next;
        }

        unordered_map<int, int> mp;
        vector<int> v1;

        for (int i = 0; i < v.size(); i++) {
            mp[v[i]]++;
        }

        for (int i = 0; i < v.size(); i++) {
            if (mp[v[i]] == 1)
                v1.push_back(v[i]);
        }

        if (v1.empty()) {
            return nullptr; 
        }
        ListNode* tmp = new ListNode(0);
        ListNode* t = tmp;

        for (int i = 0; i < v1.size(); i++) {
            tmp->val = v1[i];
            if (i < v1.size() - 1) {
                tmp->next = new ListNode(0);
                tmp = tmp->next;
            }
        }

        return t;
    }
};
