std::string alphabeticShift(std::string inputString) {
    int c;
    std::string result;
    for(int i = 0; i < inputString.size(); i++){
        if(inputString[i] == 'z'){
            inputString[i] = 'a';
        }else{
            inputString[i] += 1;
        }
    }
    return inputString;
}
