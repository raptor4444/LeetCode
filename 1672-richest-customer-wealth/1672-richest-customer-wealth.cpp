class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int supa=0;
        for(int i=0; i<accounts.size(); i++){
            supa = max(supa,accumulate(accounts[i].begin(), accounts[i].end(), 0));
        }
        return supa;
    }
};