class Solution {
public:
    int findNumbers(vector<int>& nums) {
    int res=0;
    int z = nums.size();
    for(int i=0;i<z;i++){
        int count=0;
        
        while(nums[i]>0){
            
        nums[i]=nums[i]/10;
        count++;
        }
        
        if(count%2==0)
            res++;
        
    }
    return res;
    }
};