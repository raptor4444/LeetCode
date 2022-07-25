class Solution {
public:
    int reverse(int x) {
        long long int ans = 0;
    
        while(x!=0){
            int digit = x%10;
            ans = (ans*10)+digit;
            x = x/10;
        }
        if( (ans>=INT_MIN) and (ans<=INT_MAX) )
                return ans;
        else 
            return 0;
    }
};