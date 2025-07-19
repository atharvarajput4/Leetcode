class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>diff;
        for(int i=0;i<arr.size();i++){
            diff.push_back(abs(arr[i]-x));
        }

        int left=0;
        int right=arr.size()-1;
        while((right-left)+1 != k){
            if(diff[left] > diff[right]){
                left++;
            }else{
                right--;
            }
        }

        vector<int>ans;
        for(int i=left;i<=right;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};