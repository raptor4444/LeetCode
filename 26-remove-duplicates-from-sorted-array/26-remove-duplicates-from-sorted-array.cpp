class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        int cnt = 0;
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                nums[j]=nums[i];
                cnt++;
                j++;
            }    
        } return ++cnt;
    }
};