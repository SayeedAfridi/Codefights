std::string reverseParentheses(std::string s) {
    int starting = -1;
    int ending = -1;
    
    
    for (int i=0; i<s.length(); i++)
    {
        if (s[i] == '(')
        {
            starting = i;
            
        }
        else if (s[i] == ')')
        {
            ending = i;
            s.erase(starting,1);
            s.erase(i-1,1);
            reverse (s.begin() + starting, s.begin() + ending - 1);
            i = 0;
        }
        
    }
    
    if (starting = -1)
    {
        return s;
    }
    
    reverseParentheses(s);
    
}
