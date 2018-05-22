bool isLucky(int n) {
    int digit[10], j = 1, rem, sum1 = 0, sum2 = 0;
    int res = true;
    int m = n;
    while(m != 0){
        rem = m % 10;
        digit[j++] = rem;
        m /= 10;
    }
    j = j-1;
    
    for(int i = 1, k = j/2 + 1; i <= j/2, k <= j; i++, k++){
	    sum1 += digit[i];
	    sum2 += digit[k];
    }
    if(sum1 != sum2){
        res = false;
    }
    return res;
}
