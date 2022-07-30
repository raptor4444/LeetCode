class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       
      if (strs.size() == 1){
        return strs[0];
      }
       
      if (strs[0].size() == 0) {
        return "";
      }
      int size = strs.size();
      int longest = 0;
      for(int i = 0; i < size; i++){
        if(strs[i].size() > longest) {
          longest = strs[i].size();
        }
      }
      int index = 0;
      for(int i = 1; i < strs.size(); i++)
      {
        if(strs[i-1][index] == strs[i][index])
        {
          if (i == strs.size()-1 && index < longest)
          {
            index++;
            i = 0;
          }
        }
        else
        {
          break;
        }
      }
      std::string result = "";
      for(int i = 0; i < index; i++ )
      {
        result += strs[0][i];  
      }
      return result;
    }
};