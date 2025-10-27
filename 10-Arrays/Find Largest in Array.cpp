#include <iostream>
using namespace std;

int main() {
    int marks[] = {55, 89, 90, 65, 76};
    int n = sizeof(marks) / sizeof(int);
    
    int max = marks[0];
    for(int i = 0; i<n; i++) {
        if(marks[i] > max) {
            max = marks[i];
            cout<<"assigning value " <<marks[i] <<" to max variable\n";
        }
    }
    cout<<"The largest value is "<<max <<endl;;
    
    return 0;
}
