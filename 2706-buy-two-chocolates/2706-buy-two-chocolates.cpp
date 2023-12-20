class Solution {
public:
    int buyChoco(vector<int>& price, int money) {
        int cheapest1 = INT_MAX, cheapest2 = INT_MAX;
        for (int p : price) {
            if (p < cheapest1) {
                cheapest2 = cheapest1; 
                cheapest1 = p;         
            } else if (p < cheapest2) {
                cheapest2 = p;         
            }
        }
        int total = cheapest1 + cheapest2;
        return (money >= total) ? money - total : money;
    }
};