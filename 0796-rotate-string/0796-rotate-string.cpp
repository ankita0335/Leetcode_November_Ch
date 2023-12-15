#include <string>

class Solution {
public:
    bool rotateString(std::string s, std::string goal) {
        int n = s.size();
        int m = goal.size();
        if (n != m) return false; 
        string doubleS = s + s;
        return doubleS.find(goal) != string::npos;
    }
};
