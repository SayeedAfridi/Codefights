std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> matrix) {
    int x = matrix[0].size();
    int y = matrix.size();
    std::vector<bool> m_allFalse(x + 2);
    std::vector<std::vector<int>> r;
    for(int i = 0;i < matrix.size();i++){
        matrix[i].emplace(matrix[i].begin(), 0);
        matrix[i].push_back(0);
    }
    matrix.emplace(matrix.begin(), m_allFalse);
    matrix.push_back(m_allFalse);
    
    for(int i = 1; i < matrix.size() - 1;i++){
        std::vector<int> q(x);
        for(int j = 1; j < matrix[0].size();j++){
            for(int a = i - 1;a < i + 2;a++)
                for(int b = j - 1;b < j + 2;b++){
                    if(matrix[a][b]) q[j - 1]++;
                }
            if(matrix[i][j]) q[j - 1]--;
        }
        r.push_back(q);
    }
    
    return r;
}
