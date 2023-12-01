#include <vector>
#include <string>

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1,vector<string>& word2) {
        string w1,w2;
        for (string i : word1) {
            w1 += i;
        }
        for (string i : word2) {
            w2 += i;
        }
        return w1 == w2;
    }
};
