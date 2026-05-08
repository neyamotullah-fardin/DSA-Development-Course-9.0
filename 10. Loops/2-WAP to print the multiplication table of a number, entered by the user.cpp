#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout<<"Write your number : ";
    cin>>n;
    
    for(int i = 1; i <= 10; i++) {
        cout<<(n * i) <<" ";
    }

    return 0;
}
