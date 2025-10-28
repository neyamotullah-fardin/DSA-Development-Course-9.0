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
    
    //Step-1 : ekta copy array baniye setar vitor original array er element gola reversely dhokano
    //This loop is for input Original Array's index element reversely in Copy Array
    int copyArr[n];
    for(int i=0; i<n; i++) {
        int j = n-i-1;
        copyArr[i] = orgArr[j];
    }

    //Step-2 : Copy array er element gola Original Array er vitor dhokano(Overright kora)
    //This loop is for overright Copy Array's element in Original Array
    for(int i=0; i<n; i++) {
        orgArr[i] = copyArr[i];
    }

    //Step-3 : Original array er vitor element gola reversly dhoke ace, so now ei Array take print korte hobe
    //Write a function to print the Original Array
    printorgArr(orgArr, n);

    return 0;
}
