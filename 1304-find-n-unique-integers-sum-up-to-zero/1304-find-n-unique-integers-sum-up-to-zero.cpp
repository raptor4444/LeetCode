class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> ans;
        
        for(int i = 0; i<n-1; i++) ans.push_back(i+1);
        ans.push_back(-1*accumulate(ans.begin(), ans.end(), 0));
        
        return ans;
	}
};