#include <stdio.h>
// Logic: Keep minimum price, check max profit every day.
int main() {
    int prices[] = {7, 1, 5, 3, 6, 4};
        int n = 6, minPrice = prices[0], profit = 0;
            for (int i = 1; i < n; i++) {
                    if (prices[i] < minPrice) minPrice = prices[i];
                            if (prices[i] - minPrice > profit) profit = prices[i] - minPrice;
                                }
                                    printf("Max Profit = %d", profit);
                                        return 0;
                                        }