class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>ans;
        ans.push_back(0);
        int z = gain.size();
        
        for(int i = 0;i<z;i++){
            int sum = gain[i] + ans[i];
            ans.push_back(sum);
        }
        return *max_element(ans.begin(),ans.end());
    }
};