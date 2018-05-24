int circleOfNumbers(int n, int firstNumber) {
    int result;
    result = n/2 + firstNumber;
    if(result >= n){
        return (result - n);
    }else{
        return result;
    }
}
