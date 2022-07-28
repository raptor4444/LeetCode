class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int z = image.size();
        for(int im = 0;im<z;im++){ 
            reverse(image[im].begin(),image[im].end());
            for(int i = 0; i < image[im].size();i++){ 
                if(image[im][i] == 1) 
                    image[im][i] = 0;
                else 
                    image[im][i] = 1;
            }
        }
        return image;
    }
};