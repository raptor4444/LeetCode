class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int k=nums.size();
        map<int,int>m;
        for(int i=0;i<k;i++){
            vector<int>n=nums[i];
            int p = n.size();
            for(int j=0;j<p;j++){
                m[n[j]]++;
            }
        }
        vector<int>v=nums[0];
        vector<int>V;
        int l = v.size();
        for(int i=0;i<l;i++){
            if(m[v[i]]==k){
                V.push_back(v[i]);
            }
        }
        sort(V.begin(),V.end());
        return V;
    }
};