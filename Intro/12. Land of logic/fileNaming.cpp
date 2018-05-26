std::vector<std::string> fileNaming(std::vector<std::string> names) {
    vector<string> rename;
    set<string> s;
    
    for(string str: names){
        int t = 0;
        string temp = str;
        while(s.find(temp)!=s.end())
            temp = str +"("+to_string(++t)+")";
        s.insert(temp);
        rename.push_back(temp);
    }
    return rename;
}
