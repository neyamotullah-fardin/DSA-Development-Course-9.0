#include <iostream>
#include <limits.h>
using namespace std;

void subarraySum(int *arr, int n) {
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i=0; i<n; i++) {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if(currSum<0) {
            currSum = 0;
        }
    }
    cout<<"Max Subarray Sum = " <<maxSum<<endl;
}
int main() {
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);
    subarraySum(arr, n);

    return 0;
}
