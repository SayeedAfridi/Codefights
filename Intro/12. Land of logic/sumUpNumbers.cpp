int sumUpNumbers(std::string inputString) {
    int sum = 0;
    for(int i = 0; i < inputString.size();){
        int digCount = 0;
        while(isdigit(inputString[i + digCount])){
            digCount++;
        }
        if(digCount == 0){
            i++;
            continue;
        }
        string dec = inputString.substr(i, digCount);
        sum += stoi(dec);
        i += digCount;
    }
    return sum;
}
