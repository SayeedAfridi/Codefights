std::vector<std::vector<int>> spiralNumbers(int n) {
    vector<vector<int>> res(n, vector<int>(n, 0));
    int c = 1, s = 0, e = n - 1;
    while (c <= n * n) {
        for (int lr = s; lr <= e; lr++) res[s][lr] = c++;
        for (int tb = s + 1; tb <= e; tb++) res[tb][e] = c++;
        for (int rl = e - 1; rl >= s; rl--) res[e][rl] = c++;
        for (int bt = e - 1; bt >= s + 1; bt--) res[bt][s] = c++;
        s++, e--;
    }
    return res;
}
