#include <iostream>
#include <limits.h>
using namespace std;

void subarraySum(int *arr, int n) {
    int maxSum = INT_MIN;
    for(int start=0; start<n; start++) { //start = 2nd index
        int currSum = 0;
        for(int end=start; end<n; end++) { //end = 2nd, 3rd, 3th, 4th, 5th index
            currSum = currSum + arr[end];
            maxSum = max(maxSum, currSum);
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
