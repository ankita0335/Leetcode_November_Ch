class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m =mat[0].size();
        int pos=-1;
        int n =mat.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1) {
                   c++; 
                   pos=j;
                }
            }
            if(c==1){
                c=0;
                for(int k=0;k<n;k++){
                    if(mat[k][pos]==1) c++;
                }
                if(c==1) ans++;
            }
        }
        return ans;
    }
    
};