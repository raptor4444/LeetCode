class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        
        if(n==1)
            return true;
        
        int k=nums[0];
        int i=1;
        
        while(k>0 and i<n) {
            if(nums[i]>=k)  
                k=nums[i];
            else k--;
            i++;
        }
        
        if(i==n) 
            return true;
        else 
            return false;
    }
};