std::string reverseString(std::string s){
    for(int i = 0;i < s.size()/2;i++){
        char t = s[s.size()-1-i];
        s[s.size()-1-i] = s[i];
        s[i] = t;
    }
    return s;
}
std::string reverseParentheses(std::string s) {
    int begin = 0;
    int end = s.size() - 1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(')
            begin = i;
        if(s[i] == ')'){
            end = i;
            string temp = s.substr(begin + 1, end - begin - 1);
            return reverseParentheses(s.substr(0, begin) + reverseString(temp) + s.substr(end + 1));
         }
    }
    return s;
}
