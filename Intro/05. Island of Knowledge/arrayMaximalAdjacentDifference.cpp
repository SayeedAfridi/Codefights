int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {
    int max_diff = 0;
    for(int i = 0; i< inputArray.size()-1; i++){
        //if(i == inputArray.size() - 1) break;
        if(abs(inputArray[i+1] - inputArray[i]) > max_diff){
            max_diff = abs(inputArray[i+1] - inputArray[i]);
        }
    }
    return max_diff;
}
