int makeArrayConsecutive2(std::vector<int> statues) {
    int c = 0;
    int min = statues[0];
    int max = statues[0];
    for(int i = 0; i < statues.size(); i++){
        if(statues[i] < min){
            min = statues[i];
        }
        if(statues[i] > max){
            max = statues[i];
        }
    }
    c = max - min + 1 - statues.size();
    return c;
}
