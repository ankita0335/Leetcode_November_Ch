class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size(),res=0;
        sort(piles.begin(),piles.end());
        for(int i=n/3;i<n;i=i+2){
            res+=piles[i];
        }
        return res;
    }
};