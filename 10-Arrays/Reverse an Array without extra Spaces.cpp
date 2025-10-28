#include <iostream>
using namespace std;

void printorgArr(int *orgArr, int n) {
    for(int i=0; i<n; i++) {
        cout<<orgArr[i] <<", ";
    }
    cout<<endl;
}
int main() {
    int orgArr[] = {4, 9, 60, 54, 99};
    int n = sizeof(orgArr) / sizeof(int);
    
    int start = 0, end = n-1;
    while(start < end) {
        //Swap
        int temp = orgArr[start];
        orgArr[start] = orgArr[end];
        orgArr[end] = temp;

        start++;
        end--;
    }
    printorgArr(orgArr, n);

    return 0;
}
