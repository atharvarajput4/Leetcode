class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // creating pascal's triangle
        vector<vector<int>>nums;
        for(int i=0;i<rowIndex+1;i++){
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

        //returning the row;
        vector<int>answer;
        for(int i=0;i<rowIndex+1;i++){
            answer.push_back(nums[rowIndex][i]);
        }
        return answer;
    }
};