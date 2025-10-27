#include <iostream>
using namespace std;

int linearSearch(int *rrr, int n, int key) {
    for(int i=0; i<n; i++) {
        if(rrr[i] == key) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[] = {3, 5, 29, 65, 89, 65};
    int n = sizeof(arr) / sizeof(int);
    cout<<linearSearch(arr, n, 88);

    return 0;
}
