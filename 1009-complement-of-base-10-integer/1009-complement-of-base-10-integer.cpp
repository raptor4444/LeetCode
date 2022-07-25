class Solution {
public:
    int bitwiseComplement(int n) {
        int dup = 0;
        int m = n;
        if(n==0)
            return 1;
        while(n!=0){
            dup = (dup<<1) | 1;
            n = n>>1;
        }
        int ans = (~m) & dup;
        return ans;    
    }
};