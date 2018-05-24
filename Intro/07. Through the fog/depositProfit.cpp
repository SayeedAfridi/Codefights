int depositProfit(int deposit, int rate, int threshold) {
    int years = 0;
    double r = (double) rate/100;
    double d = (double) deposit;
    for(; ;){
		double profit =  d *  r;
		d =  d + profit;
		years++;
		if(d >= threshold){
			break;
		}
	}
    return years;
}
