class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>ans;
        ans.push_back(0);
        
        for(int i = 0;i<gain.size();i++){
            int sum = gain[i] + ans[i];
            ans.push_back(sum);
        }
        return *max_element(ans.begin(),ans.end());
    }
};