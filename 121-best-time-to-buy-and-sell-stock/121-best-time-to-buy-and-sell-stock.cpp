class Solution {
public:
    int maxProfit(vector<int>& k) {
        int p = 0;
        int m = INT_MAX;
        int l = k.size();
        for(int i = 0; i < l; i++){
            m = min(m, k[i]);
            p = max(p, k[i] - m);
        }
        return p;
    }
};