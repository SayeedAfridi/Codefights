int arrayChange(std::vector<int> inputArray) {
    int c = 0;
    for(int i = 0; i < inputArray.size(); i++){
        if(i == inputArray.size()-1) break;
        if(inputArray[i+1] > inputArray[i]) continue;
        else if(inputArray[i+1] < inputArray[i]){
            while(inputArray[i + 1] <= inputArray[i]){
                inputArray[i + 1] += 1;
                c++;
            }
            
        }
        else if(inputArray[i+1] == inputArray[i]){
            inputArray[i+1] += 1;
            c++;
        }
    }
    return c;
}
