std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image) {
    int x = image[0].size() - 2;
    int y = image.size() - 2;
    vector< vector <int>> b;
    
    for(int i = 0;i < y;i++){
        vector<int> a(x);
        for(int j = 0;j < x;j++){
            a[j] = image[i][j] + image[i][j+1] + image[i][j+2] +
                      image[i+1][j] + image[i+1][j+1] + image[i+1][j+2] +
                      image[i+2][j] + image[i+2][j+1] + image[i+2][j+2];
            a[j] /= 9;
        }
        b.push_back(a);
    }
    return b;
}
