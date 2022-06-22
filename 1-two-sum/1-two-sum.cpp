class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map <int, int> z;
        vector <int> ans;
        int n =nums.size(); 
        
        for (int i = 0; i<n; i++) {
            
            if (z.find(target-nums[i]) != z.end()) {
                
                ans.push_back(i);
                ans.push_back(z[target-nums[i]]);
                return ans;
            }
            
            z[nums[i]] = i;
        }
        
        return ans;
    }
};