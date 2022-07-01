class Solution {
public:
  int minCostToMoveChips(vector<int>& position) {
      
    int even = 0, odd = 0;
    int j = position.size();
      
    for(int i = 0; i < j; i++){
      if(position[i] & 1) odd++;
      else even++;
    }
    return min(odd, even);
  }
};