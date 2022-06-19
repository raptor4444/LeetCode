class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=-1, sum;
        int n=accounts.size();
        int z = accounts[0].size();
        
        for(int i=0; i<n; i++){
            sum=0;
            for(int j=0; j<z; j++){
                sum += accounts[i][j];
            }
            if(max<sum)
                max = sum;
        }
        return max;
    }
};