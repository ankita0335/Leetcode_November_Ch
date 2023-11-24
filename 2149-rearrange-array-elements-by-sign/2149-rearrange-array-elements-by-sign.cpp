class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>nums1;
        vector<int>nums2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                nums1.push_back(nums[i]);
            }
            else{
                nums2.push_back(nums[i]);
            }
        }
        for (int i = 0; i < nums.size()/2; i++) {
            nums[2*i]=nums1[i];
            nums[2*i+1]=nums2[i];
        }

        return nums;
    }
};
