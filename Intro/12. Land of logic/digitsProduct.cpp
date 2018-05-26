int digitsProduct(int product) {
    if (product < 10)
        return product ? product:10;
    string r;
    for (int i = 9; i > 1; i--) {
        while (product % i == 0) {
            product /= i;
            r = char('0' + i) + r;
        }
    }
    return product != 1 ? -1 : stoi(r);
}
