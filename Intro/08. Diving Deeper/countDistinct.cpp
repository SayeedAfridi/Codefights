int countDistinct(std::string s){
    int ele[256] = {0}, c = 0;
    for(int i = 0; i< s.size(); i++){
        if(s[i]>= 97 && s[i] <= 122){
            int j = s[i];
            ele[j] = 1;
        }
    }
    for(int i= 0; i < 256; i++){
        if(ele[i] == 1){
            c++;
        }
    }
    return c;
}
int differentSymbolsNaive(std::string s) {
    return countDistinct(s);
}
