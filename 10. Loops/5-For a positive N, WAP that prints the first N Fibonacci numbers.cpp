#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout<<"Write your number (From 2): ";
    cin>>n;

    // Fibonacci 0,1,1,2,3,5,7,... | 0=first, 1=second, 1=third, 2=fourth, 3=fifth, 5=sixth
    int first = 0, sec = 1;
    cout<<first <<" " <<sec <<" ";
    for(int i = 2; i < n; i++) { // in 0,1 index
        int third = first + sec;
        cout<<third <<" ";
        first = sec;
        sec = third;
    }
    return 0;
}
