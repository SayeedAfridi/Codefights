std::string lineEncoding(std::string s) {
    char ch = s[0];
    int n = 1;
    string result;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == ch){
            n++;
        }else{
            if(n > 1){
                result += to_string(n);
                result += ch;
            }else{
                result += ch;
            }
            ch = s[i];
            n = 1;
        }
    }
    if(n > 1){
        result += to_string(n);
        result += ch;
    }else{
        result += ch;
    }
    return result;
}
