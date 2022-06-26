class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
		
        int n= matrix.size();
        
        vector<vector<int>> res(matrix[0].size(), vector<int>(n));
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<matrix[0].size();j++) {
                res[j][i] = matrix[i][j];
            }
        }
        
        return res;
    }
};