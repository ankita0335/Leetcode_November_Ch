class Solution {
public:
    string sortVowels(string s) {
        vector<char> v; 
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                v.push_back(s[i]);
            }
        }
        sort(v.begin(), v.end());
        for (int i = 0, j = 0; i < n; i++) {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                s[i] = v[j++];
            }
        }
        return s;
    }
};
