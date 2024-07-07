#include<stdio.h>
int countLetter(char arr[]);

int main() {
    char word[100];
    fgets(word, 100, stdin);
    printf("No. of times 'h' appears in the given word is: %d", countLetter(word));
    return 0;
}

int countLetter(char arr[]) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        if(arr[i] == 'h') {
            count ++;
        }
    }
    return count;
}
