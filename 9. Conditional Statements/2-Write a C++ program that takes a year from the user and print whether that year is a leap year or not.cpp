#include <iostream>
using namespace std;

int main() {
    /*Hint : A leap year is exactly divisible by 4 except for century years (years ending with 00).
    The century year is a leap year only if it is perfectly divisible by 400*/

    int year;
    cout<<"Write your Year : ";
    cin>>year;

    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        cout<<"This is a Leap Year!";
    }else {
        cout<<"This is not a Leap Year";
    }

    return 0;
}
