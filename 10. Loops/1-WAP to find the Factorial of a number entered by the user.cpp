#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, fact = 1;
    cout<<"Write your number : ";
    cin>>n;
    
    for(int i = n; i >= 1; i--) {
        fact *=  i;
    }
    cout<<"Factorial : "<<fact <<endl;

    return 0;
}
