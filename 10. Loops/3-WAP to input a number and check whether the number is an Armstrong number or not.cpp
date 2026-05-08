#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, cubeSum = 0;
    cout<<"Write your number : ";
    cin>>n;
    int num = n;

    while(num > 0) {
        int lastDig = num % 10;
        cubeSum += lastDig*lastDig*lastDig;
        num /= 10;

    }
    if(cubeSum == n) {
        cout<<"Armstrong Number!"<<endl;
    }else {
        cout<<"Not Armstrong Number!"<<endl;
    }
    

    return 0;
