char firstDigit(std::string inputString) {
    int n;
    for(int i = 0; i < inputString.size(); i++){
        if(inputString[i]>= 48 && inputString[i] <= 57){
            n = i;
            break;
        }   
    }
    return inputString[n];
}
