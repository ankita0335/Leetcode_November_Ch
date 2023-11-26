class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int maxi=0,sum=0;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1 && i>0){
                    matrix[i][j]+=matrix[i-1][j];
                }
            }
            vector<int>height=matrix[i];
            sort(begin(height),height.end(),greater<int>());
            for(int k=0;k<m;k++){
                int base=(k+1);
                int h=height[k];
                maxi=max(maxi,h*base);
            }
        }
        return maxi;
    }
};
