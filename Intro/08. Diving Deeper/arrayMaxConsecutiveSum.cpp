int arrayMaxConsecutiveSum(std::vector<int> inputArray, int k) {
    int sum1 = 0;
    for(int i = 0; i < k; i++){
        sum1 += inputArray[i];
    }
    int sum2 = sum1;
    for(int i = 1; i <= inputArray.size() - k; i++){
        sum2 = sum2 - inputArray[i-1] + inputArray[i+k-1];
        if(sum2 > sum1){
            sum1 = sum2;
        }
    }
    
    return sum1;
}
