class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        set<int>st;
        vector<int>ans;
        unordered_map<int,int>hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }

        for(int i=0;i<nums.size();i++){
            if(hash[nums[i]] > nums.size()/3){
                st.insert(nums[i]);
            }
        }

        for(auto value:st){
            ans.push_back(value);
        }

        return ans;
    }
};