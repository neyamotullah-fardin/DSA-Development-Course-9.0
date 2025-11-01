#include <iostream>
#include <limits.h>
using namespace std;

void maxProfit(int *prices, int n) {
    int bestBuyDay[100000];
    bestBuyDay[0] = INT_MAX;
    for(int i=1; i<n; i++) {
        bestBuyDay[i] = min(bestBuyDay[i-1], prices[i-1]);
    }

    int maxProfit = 0;
    for(int i=0; i<n; i++) {
        int currProfit = prices[i] - bestBuyDay[i];
        maxProfit = max(maxProfit, currProfit);

    }
    cout<<"Maximum Profit = " <<maxProfit;
    
}
int main() {
    int prices[] = {7, 5, 4, 3, 2, 1};
    int n = sizeof(prices) / sizeof(int);
    maxProfit(prices, n);

    return 0;
}
