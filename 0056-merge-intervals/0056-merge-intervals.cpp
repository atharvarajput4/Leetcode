class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int start = intervals[0][0];
        int end = intervals[0][1];
        vector<vector<int>>answer;
        for(int i=1;i<intervals.size();i++){
            int j=0;
            if(start <= intervals[i][j] && intervals[i][j] <= end){
                start = min(start,intervals[i][j]);
                end = max(end,intervals[i][j+1]);
            }else{
                vector<int>ans;                    
                ans.push_back(start);
                ans.push_back(end);
                answer.push_back(ans);
                start = intervals[i][j];
                end = intervals[i][j+1];
            }
        }
        
        vector<int>ans;
        ans.push_back(start);
        ans.push_back(end);
        answer.push_back(ans);
        return answer;
    }
};