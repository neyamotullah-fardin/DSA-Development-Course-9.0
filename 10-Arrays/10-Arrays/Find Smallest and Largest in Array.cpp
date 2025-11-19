#include <iostream>
#include <limits.h>
#include <cstring>
#include <string>
using namespace std;

int main() {
    int marks[] = {9, 6, 98, 7, 3 , 98, 4 , 2};
    int n = sizeof(marks) / sizeof(int);
    
    int max = marks[0];
    int min = marks[0];
    for(int i=0; i<n; i++) {
        if(marks[i] > max) {
            max = marks[i];
        }

        if(marks[i] < min) {
            min = marks[i];

        }
    }
    cout<<"Maximum is "<<max <<endl;
    cout<<"Minimum is "<<min <<endl;

   return 0;
}
