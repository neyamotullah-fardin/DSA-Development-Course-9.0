#include <iostream>
using namespace std;

int main() {
    float principal, rate, time;
    cout<<"Enter Principal Amonnt: ";
    cin>>principal;
    cout<<"Enter Rate of Interest (%): ";
    cin>>rate;
    cout<<"Enter Time Period (in years): ";
    cin>>time;

    cout<<"Simple Interest is "<<((principal * rate * time) / 100);
    
    return 0;
}
