#include <iostream>
#include <limits.h>
#include <cstring>
using namespace std;

void toLower(char word[], int n) {
    for(int i=0; i<n; i++) {
        char ch = word[i];
        if(ch >= 'a' && ch<= 'z') {
            continue;
        }else {
            word[i] = ch-'A' + 'a';
        }
    }
    cout<<"Your Written Word is " <<word;
}

int main() {
    char word[10];
    cout<<"Write your word : ";
    cin.getline(word, 10);

    toLower(word, strlen(word));

   return 0;
}
