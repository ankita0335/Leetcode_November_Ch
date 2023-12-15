class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int> mp;
        string ans = " ";
        for (int i = 0; i < paths.size(); i++) {
            mp[paths[i][0]]++;
            mp[paths[i][1]] +=-1;
        }
        for (auto i : mp) {
            if (i.second == -1) {
                ans = i.first;
            }
        } 
        return ans;
    }
};
