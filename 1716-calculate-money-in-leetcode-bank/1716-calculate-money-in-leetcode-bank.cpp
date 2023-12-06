class Solution {
public:
    int totalMoney(int n) {
        int sum = 0, c = 1, week = 0;
        for (int i = 0; i < n; ++i) {
            if (i % 7 == 0) {
                c = ++week;
            }
            sum += c + (i % 7);
        }

        return sum;
    }
};
