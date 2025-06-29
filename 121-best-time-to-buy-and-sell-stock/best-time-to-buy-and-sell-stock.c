int maxProfit(int* prices, int pricesSize) {
    int max = 0;
    int base = prices[0];
    for (int i = 1; i < pricesSize; i++) {
        if (prices[i] < base) {
            base = prices[i];
        }
        if (prices[i] - base > max) {
            max = prices[i] - base;
        }
    }
    return max;
}

