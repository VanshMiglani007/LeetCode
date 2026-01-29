class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++) {
            int l = 0, r = image[i].size() - 1;

            while (l <= r) {
                int temp = image[i][l] ^ 1;
                image[i][l] = image[i][r] ^ 1;
                image[i][r] = temp;

                l++;
                r--;
            }
        }
        return image;
    }
};
