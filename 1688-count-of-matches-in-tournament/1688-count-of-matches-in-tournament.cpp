class Solution {
public:
    int numberOfMatches(int n) {
        int ans=0;
        int match=1;
        while(n>1){
            if(n%2==0){
                match=n/2;
                int advance=n/2;
                n=advance;
            }
            else{
                match=(n-1)/2;
                int advance=((n-1)/2)+1;
                n=advance;
            }
            ans+=match;
        }
        return ans;
    }
};