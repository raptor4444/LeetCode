class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int count = 0;
        int r = g.size();
        int k = s.size();
    
        for(int j = 0; count < r && j < k; ++j){
            if(g[count] <= s[j]) count++;
        }
        
        return count;
    }
};