class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>row(matrix.size(),0);
        vector<int>col(matrix[0].size(),0);
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j] == 0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }

        // updating values;
        for(int i=0;i<matrix.size();i++){  
            for(int j=0;j<matrix[i].size();j++){
                if(row[i]==1 || col[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
    }
};