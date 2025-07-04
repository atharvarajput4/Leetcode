class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<pair<int,int>>ans;
        int i=0;
        int j=i+1;
        int diff;
        while(j < nums.size()){
            diff = nums[j]-nums[i];
            if(diff == k){
                ans.insert({nums[i],nums[j]});
                i++;
                j++;
            }else if(diff > k){
                i++;
            }else{
                j++;
            }
            if(i == j)j++;
        }
        return ans.size();
    }
};