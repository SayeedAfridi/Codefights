bool areSimilar(std::vector<int> a, std::vector<int> b) {
    int c = 0;
    set<int> s;
    for(int i = 0;i < a.size();i++){
        if(a[i] != b[i]){
            c++;
            s.insert(a[i]);
            s.insert(b[i]);
        }
    }
    if(c == 0) return true;
    else if(c == 2 && s.size() == 2) return true;
    else return false;
}
