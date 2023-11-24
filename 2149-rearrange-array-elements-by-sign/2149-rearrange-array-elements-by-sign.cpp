class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i=0,i1=1;
        vector<int>nums1(nums.size(),0);
        for(int j=0;j<nums.size();j++){
            if(nums[j]>0){
                nums1[i]=nums[j];
                i+=2;
            }
            else{
                nums1[i1]=nums[j];
                i1=i1+2;
            }
        }
        return nums1;
    }
};
