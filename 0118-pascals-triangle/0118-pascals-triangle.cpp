class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>nums;
        for(int i=0;i<n;i++){
            vector<int>ans(i+1,1);
            for(int j=0;j<i+1;j++){
                if(j==0 || i==j){
                    ans[j]=1;
                }else{
                    ans[j] = nums[i-1][j] + nums[i-1][j-1];
                }
            }
            nums.push_back(ans);
        }
        return nums;
    }
};
