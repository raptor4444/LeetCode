class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        int k=0;
        int a = nums1.size();
        int m = nums2.size();
        
        vector<double> res(a+m);
        while(i<a && j<m){
            if(nums1[i]<nums2[j]){
                res[k++]=nums1[i++];
            }
            else{
                res[k++]=nums2[j++];
            }
        }
        while(i<a){
            res[k++]=nums1[i++];
        }
        while(j<m){
            res[k++]=nums2[j++];
        }
       int ss=res.size();
        if(ss%2==0)
            return (res[ss/2-1]+res[(ss/2)])/2;
        else
            return res[ss/2];
    }
};