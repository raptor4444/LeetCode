class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n = nums.size();
        vector<int> ans;
        int i=0; 
        
        while(n--){
            ans.insert(ans.begin()+index[i], nums[i]);
            i++;
        }
        return ans;
    }
};