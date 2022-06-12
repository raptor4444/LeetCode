class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i=0, j=0;
        while(j<n)
        {
            nums1[m+i] = nums2[j++];
            i++;
        }
        sort(nums1.begin(),nums1.end());
    }
};




// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
//         if(nums2.size()==0){
//             return ;
//         }
//         else{
//             int i=0;
//             for(int j=m; j<m+n; j++){
//                 nums1[j]=nums2[i];
//                 i++;
//             }
//             sort(nums1.begin(), nums2.end());
//         }
//     }
// };
