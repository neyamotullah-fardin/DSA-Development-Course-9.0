#include <iostream>
using namespace std;

int main() {
    int age[] = {55, 29, 19, 33, 67, 99, 10};
    int n = sizeof(age) / sizeof(int);
    
    int min = age[0];
    for(int i=0; i<n; i++) {
        if(age[i] < min) {
            min = age[i];
        }
    }
    cout<<min;
    return 0;
}
