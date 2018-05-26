std::string reverseString (std::string s) {
    int l = s.size();
    for(int i = 0;i < l/2;i++){
        char temp = s[i];
        s[i] = s[l - 1 - i];
        s[l - 1 - i] = temp;
    }
    return s;
}

bool checkPalindrome(std::string s){
    for(int i = 0;i < s.size()/2;i++){
        if(s[s.size() - 1 - i] != s[i])
            return false;
    }
    return true;
}

std::string buildPalindrome(std::string st) {
    std::string temp = reverseString(st);
    if(checkPalindrome(st)){
        return st;
    }
    for(int i = 0; i < st.size(); i++){
        std::string add = temp.substr(temp.size() - 1 - i);
        
        if(checkPalindrome(st + add)){
            return st + add;
        }
    }
    return st + temp.substr(1);
}
