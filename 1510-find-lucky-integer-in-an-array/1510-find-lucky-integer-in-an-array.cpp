class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>hash;
        int n = arr.size();
        int ans =-1;

        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }

        for(int i=0;i<n;i++){
            if(arr[i] == hash[arr[i]] && ans<=arr[i]){
                ans=arr[i];
            }
        }
        return ans;
    }
};