class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        int n=intervals.size();
        for(int i=0;i<n;i++){
            int strt=intervals[i][0];
            int end=intervals[i][1];
            if(!ans.empty() && end<=ans.back()[1]){
                continue;
            }
            for(int j=i+1;j<n;j++){
                if(intervals[j][0]<=end){
                    end=max(intervals[j][1],end);
                }
                else{
                    break;
                }
            }
            ans.push_back({strt,end});
        }
        return ans;
    }
};