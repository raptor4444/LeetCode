class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int z = image.size();
        for(int i = 0; i < z; i++) reverse(image[i].begin(), image[i].end());
        for(int i = 0; i < z; i++) {
            for(int j = 0; j < z; j++) image[i][j] ^= 1;
        }
        return image;
    }
};