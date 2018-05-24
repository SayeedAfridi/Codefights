bool palindromeRearranging(std::string inputString) {
    int abc[26] = {};
    int t = 0;
    for(auto i:inputString){
        abc[i - 'a']++;
    }
    for(auto i:abc) i % 2 == 1? t++: t = t;
    return t == inputString.size() % 2;
}

