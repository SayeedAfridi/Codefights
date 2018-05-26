int digit(int n){
    int dig[1000000], j = 0;
    int min = 10000000;
    while(n != 0){
        if(n%10 < min){
            min = n % 10;
        }
        dig[j++] = n % 10;
        n /= 10;
    }
    int c = 1, sum = 0, del;
    for(int i = 0; i < j; i++){
        if(dig[i] == min){
            del = i;
        }
    }
    for(int i = 0; i < j; i++){
        if(i == del){
            continue;
        }
        sum += c * dig[i];
        c *= 10;
    }
    
    return sum;
}

int deleteDigit(int n) {
    string s = to_string(n);
    for (int i = 1; i < s.size(); i++)
        if (s[i - 1] < s[i]) {s.erase(s.begin() + i - 1); return stoi(s);}
    s.erase(s.end() - 1);
    return stoi(s);
}
