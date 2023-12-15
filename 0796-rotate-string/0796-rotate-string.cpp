#include <string>

class Solution {
public:
    bool rotateString(std::string s, std::string goal) {
        int n = s.size();
        int m = goal.size();
        int flag = 0;
        string str = s + s;
        if(n!=m)    return false;
        for (int i = 0; i < str.size(); i++) {
            if (str.find(goal) != string::npos) {
                return true;
                flag = 1;
            }
        }
        if (flag == 1) return true;
        return false;
    }
};
