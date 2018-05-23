std::vector<int> alternatingSums(std::vector<int> a) {
    int sum1=0, sum2=0;
    std::vector<int> f;
    for(int i = 0; i <(int) a.size(); i++){
        if(i % 2 == 0){
            sum1 += a[i];
        }else{
         sum2 += a[i];   
        }
    }
    f.push_back(sum1);
    f.push_back(sum2);
    return f;
}
