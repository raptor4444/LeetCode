class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();
        int j=0;
        int a = nums[0];
        
        for(int i=1; i<n; i++){
            
            if(a!=nums[i]){
                
                j++;
                a=nums[i];
                nums[j]=nums[i];
            }       
        }
        return j+1;
    }
};