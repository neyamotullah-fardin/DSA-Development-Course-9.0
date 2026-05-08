#include <iostream>
using namespace std;

int main() {
    float pencil;
    float pen;
    float eraser;

    cout<<"What is the cost of pencil? \n";
    cin>>pencil;
    cout<<"What is the cost of pen? \n";
    cin>>pen;
    cout<<"What is the cost of eraser? \n";
    cin>>eraser;
    
    float total = pencil + pen + eraser;
    cout<<"Yours Bill is "<<total + (0.18 * total)<<" Taka.";


    
    return 0;
}
