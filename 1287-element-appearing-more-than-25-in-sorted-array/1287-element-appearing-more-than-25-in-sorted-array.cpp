class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int a=n/4;
        int ans=1;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto i:mp){
            if(i.second>a){
                ans=i.first;
            }    
        }
        return ans;
    }
};