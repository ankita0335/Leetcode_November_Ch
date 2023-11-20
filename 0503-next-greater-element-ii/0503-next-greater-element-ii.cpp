class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        vector<int>v;
        for(int i=2*nums.size()-1;i>=0;i--){
            while(!st.empty() &&  st.top()<=nums[i%nums.size()]){
                st.pop();
            }
            if(i<nums.size()){
                if(st.empty()){
                    v.push_back(-1);
                }
                else {
                    v.push_back(st.top());
                }
            }
            st.push(nums[i%nums.size()]);        
        }
        reverse(v.begin(),v.end());
        return v;

    }
};
