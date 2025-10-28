#include <iostream>
using namespace std;

int binSearch(int *orgArr, int n, int key) {
    int st = 0, end = n-1;
    while(st <= end) {
        int mid = (st + end) / 2;
        if(orgArr[mid] == key) {      //key found
            return mid;
        }else if(orgArr[mid] < key) { //2nd half
            st = mid + 1;
        }else {                       //1st half
            end = mid - 1;
        }
    }
    return -1;
}
int main() {
    int orgArr[] = {10, 30, 55, 76, 89, 198};
    int n = sizeof(orgArr) / sizeof(int);
    int key = 89;
    cout<<binSearch(orgArr, n, key);
    return 0;
}
