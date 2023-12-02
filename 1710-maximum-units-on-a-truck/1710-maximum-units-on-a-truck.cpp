bool compare(vector<int>v1, vector<int>v2){
       int i;
        return v1[1]>v2[1];
    }
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int ans=0,i=0;
        sort(boxTypes.begin(),boxTypes.end(),compare);
        while(truckSize>0 && i<boxTypes.size()){
            if(boxTypes[i][0]<=truckSize){
                ans+=boxTypes[i][0]*boxTypes[i][1];
                truckSize-=boxTypes[i][0];
            }
            else{
                int canTake=truckSize;
                truckSize=0;
                ans+=canTake*boxTypes[i][1];
            }
        i++;
        }
        return ans;
    }
};
