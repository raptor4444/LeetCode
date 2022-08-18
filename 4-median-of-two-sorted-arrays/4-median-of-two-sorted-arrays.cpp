class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans=0.0;
        int k = nums2.size();
        for(int i=0;i<k;i++){
            nums1.push_back(nums2[i]);
        }
        int z =nums1.size();
        int n=z;
        sort(nums1.begin(),nums1.end());
        int mid=z/2;
        if(n%2==0){ 
            ans = double(nums1[mid]+nums1[mid-1])/2;
        }else
            ans=nums1[mid];
        return ans;
    }
};