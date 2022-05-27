class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
       for(int x=1; x<arr.size()-1; x++)
           if(arr[x-1]<arr[x] && arr[x] > arr[x+1])
               return x;
        return 0;
    }
};