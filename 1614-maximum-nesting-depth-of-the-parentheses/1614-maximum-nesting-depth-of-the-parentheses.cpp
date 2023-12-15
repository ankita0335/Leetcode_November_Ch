class Solution {
public:
    int maxDepth(string s) {
        int depth=0,c=0;
        for(int i:s){
            if(i=='('){
                c++;
            }
            else if(i==')')  c--;
            depth=max(depth,c);
        }
        return depth;
    }
};