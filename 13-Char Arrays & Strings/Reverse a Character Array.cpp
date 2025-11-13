#include <iostream>
#include <limits.h>
#include <cstring>
using namespace std;

void reverseCharArr(char ch[], int n) {
    int st=0, end=n-1;
    while(st < end) {
         swap(ch[st], ch[end]);
         st++;
         end--;
    }
    cout<<ch;
}

int main() {
    char ch[10];
    cout<<"Write your word : ";
    cin.getline(ch, 10);

    reverseCharArr(ch, strlen(ch));
    

   return 0;
}
