int adjacentElementsProduct(std::vector<int> inputArray) {
    int max = -100001;
    int n = inputArray.size();
    for(int i = 0; i < n -1; i++){
        if(inputArray[i] * inputArray[i+1] > max){
            max = inputArray[i] * inputArray[i+1];
        }
    }
    return max;
}
