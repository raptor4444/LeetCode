class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int j=nums.size();
        int stop = 0;
        
        for(int i=0; i<j; i++){
            if(nums[i]==target){
                
                while(j--){
                    if(nums[j]==target){
                        return {i,j};
                        stop =1;
                        break;
                    }  
                }
            }if(stop==1) break;
        }
        return {-1,-1};
    }
};