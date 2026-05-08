#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Write your number (3 Digit): ";
    cin>>n;
    int num = n;

    int dig1 = num % 10;
    num = num / 10;
    int dig2 = num % 10;
    num /= 10;
    int dig3 = num;

    int cubeSum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;
    if(n == cubeSum) {
        cout<<"This is a Armstrong Number";
    }else {
        cout<<"is Not a Armstrong Number!";
    }

    return 0;
}
