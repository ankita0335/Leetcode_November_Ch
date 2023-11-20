class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int maxi=0,c=0;
        for(int i=0;i<arr.size();i++){
            maxi=max(maxi,arr[i]);
            if(i==maxi)  c++;
        }
        return c;
    }
};