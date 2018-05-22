std::vector<int> sortByHeight(std::vector<int> a) {
    int l = a.size(), s[15], j = 0, min = 0, max = 0;
    for(int i = 0; i < l; i++){
        if(a[i]!= -1){
            s[j] = a[i];
            j++;
        }
    }
    sort(s, s+j);
    int m = 0;
    std::vector <int> f;
    for(int k = 0; k < l; k++){
        if(a[k] == -1){
            f.push_back(a[k]);
        }else{
            f.push_back(s[m++]);
        }
    }
    return f;
}
