bool isBeautifulString(std::string inputString) {
    int count[26]= {};
    for(auto c:inputString){
        count[c - 97]++;
    }
    for(int i = 1; i < 26; i++){
        if(count[i-1] < count[i]){
            return false;
        }
    }
    return true;
}
