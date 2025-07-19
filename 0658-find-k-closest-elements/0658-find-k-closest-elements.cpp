class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>diff;
        for(int i=0;i<arr.size();i++){
            diff.push_back(abs(arr[i]-x));
        }

        vector<pair<int,int>>paired;
        for(int i=0;i<arr.size();i++){
            paired.push_back({diff[i],arr[i]});
        }

        sort(paired.begin(),paired.end());

        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(paired[i].second);
        }

        sort(ans.begin(),ans.end());
        return ans;
    }
};