class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        if(nums1.size()>nums2.size()) return findMedianSortedArrays(nums2,nums1);
        int A=nums1.size(),B=nums2.size();
        int start=0, end=A;
        
        while(start<=end){
            
            int cut1=(start+end)>>1;
            int cut2=(A+B+1)/2-cut1;
            
            int left1=cut1==0? INT_MIN:nums1[cut1-1];
            int left2=cut2==0? INT_MIN:nums2[cut2-1];
            int right1=cut1==A? INT_MAX:nums1[cut1];
            int right2=cut2==B? INT_MAX:nums2[cut2];
            
            if(left1 <= right2 && left2 <= right1){
                if((A+B)%2==0) return (max(left1,left2)+min(right1,right2))/2.0;
                return (max(left1,left2));
            }
            else if
                (left1>right2) end=cut1-1;
            
            else  
                start=cut1+1;
            
        }
        return 0.0;
    }
};