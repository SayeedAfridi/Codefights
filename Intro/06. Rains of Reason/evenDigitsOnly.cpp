bool evenDigitsOnly(int n) {
    int dig[100000000], j = 0;
    while(n !=0){
        dig[j++] = n % 10;
        n /= 10;
    }
    for(int i = 0; i < j; i++){
        if(dig[i] % 2 != 0){
            return false;
        }
    }
    return true;
}
