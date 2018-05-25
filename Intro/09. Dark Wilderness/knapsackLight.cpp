int knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {
    int max = 0;
    if(weight1 + weight2 <= maxW){
        max = value1 + value2;
    }else if(value1 > value2 && weight1 <= maxW){
        max = value1;
    }else if(weight2 <= maxW){
        max = value2;
    }else if(weight1 <= maxW){
        max = value1;
    }else{
        max = 0;
    }
    return max;
}
