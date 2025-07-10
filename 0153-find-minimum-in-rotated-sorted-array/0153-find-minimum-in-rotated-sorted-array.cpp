class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        while(start<end){
            int mid=start+(end-start)/2;
            if(mid+1<n && nums[mid]>nums[mid+1]){
                return nums[mid+1];
            }else if(mid-1>=0 && nums[mid-1] > nums[mid]){
                return nums[mid];
            }else if(nums[mid] <= nums[0]){
                end=mid;
            }else if(nums[mid] > nums[0]){
                start=mid+1;
            }
        }
        return nums[0];
    }
};