std::string longestDigitsPrefix(std::string inputString) {
    std::string tem = "";
    if(inputString.size() == 0){
        return "";
    }
    for(auto dig:inputString){
        if(dig > '9' || dig < '0'){
            break;
        }else{
            tem += dig;
        }
    }
    return tem;
}
