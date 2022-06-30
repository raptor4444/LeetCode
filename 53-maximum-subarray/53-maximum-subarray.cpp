class Solution {
public:
int maxSubArray(vector<int>& nums) {
    int j = nums.size();
    
    int z=0, maxS=INT_MIN, n=j;
    for(int i=0;i<n;i++)
    {
        z += nums[i];
        maxS = max(maxS, z);
        if(z < 0)   z = 0;
    }
    return maxS;
}
};