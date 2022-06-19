class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int max = *max_element(candies.begin(), candies.end());

        vector<bool> ans;
        int n = candies.size();
        
        for(int j=0; j<n; j++){
            if(candies[j] + extraCandies >= max){
                ans.push_back(true);
            }
            else
                ans.push_back(false);
        }return ans;
    }
};