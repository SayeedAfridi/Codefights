int avoidObstacles(std::vector<int> inputArray) {
    sort(inputArray.begin(), inputArray.end());
    
    for(int x = 2; ; x++){
        for(int y = 0; y < inputArray.size(); y++) {
            if(inputArray[y] % x == 0){
                break;
            }
            else if(y == inputArray.size() - 1){
                return x;
            }
        }
    }
}
