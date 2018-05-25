std::vector<int> extractEachKth(std::vector<int> inputArray, int k) {
    
    for(int i = k * (inputArray.size() / k) - 1;i >= 0;i -= k)
        inputArray.erase(inputArray.begin() + i);
    return inputArray;
}
