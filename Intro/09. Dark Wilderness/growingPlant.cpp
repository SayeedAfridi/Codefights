int growingPlant(int upSpeed, int downSpeed, int desiredHeight) {
    int  days = 0;
    if(desiredHeight <= upSpeed){
        return 1;
    }
    int day_g = upSpeed - downSpeed;
    return (desiredHeight - upSpeed - 1) / day_g + 2;
}
