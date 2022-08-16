class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int a = nums1.size();
        int b = nums2.size();
        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                if(nums1[i] == nums2[j]){
                    ans.push_back(nums1[i]);
                    nums2[j] = -1;
                    break;
                }
            }
        }
        return ans;        
    }
};