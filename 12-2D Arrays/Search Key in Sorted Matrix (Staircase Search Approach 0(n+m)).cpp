#include <iostream>
#include <limits.h>
using namespace std;

bool search(int mat[][4], int n, int m, int key) {
    int i=0, j=m-1;
    while(i < n && j >= 0) {
        if(mat[i][j] == key) {
            cout<< "Key Found at Cell (" <<i <<"," <<j <<")";
            return true;
        } else if(mat[i][j] < key) {
            i++;
        } else{
            j--;
        }
    } 
    cout<<"Key doesn't found!";
    return false;
}

int main() {
    int mat[][4] = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50}};

    search(mat, 4, 4, 33);

   return 0;
}
