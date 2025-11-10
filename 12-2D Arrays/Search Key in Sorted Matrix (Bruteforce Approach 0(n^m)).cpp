#include <iostream>
#include <limits.h>
using namespace std;

int findKey(int mat[][4], int n, int key) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(key == mat[i][j]) {
                cout<<i <<", "<<j;
            }
        }
    }
}

int main() {
    int mat[4][4] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}};
    findKey(mat, 4, 27);
    

    return 0;
}
