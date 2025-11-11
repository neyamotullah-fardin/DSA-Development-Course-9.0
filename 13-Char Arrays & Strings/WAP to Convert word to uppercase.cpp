#include <iostream>
#include <limits.h>
#include <cstring>
using namespace std;

void toUpper(char word[], int n) {
         for(int i=0; i<n; i++) {
            char ch = word[i];
            if(ch >= 'A' && ch <= 'Z') {
                continue;
            }else {
                word[i] = ch-'a' + 'A';
            }
         }
         cout<<word<<endl;
}

int main() {
    char word[10];
    cout<<"Write your word : ";
    cin.getline(word, 10);
    toUpper(word, strlen(word));

   return 0;
}
