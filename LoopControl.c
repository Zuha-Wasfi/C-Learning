#include<stdio.h>

int main() {
    //For Loop
    for(float i=1.0; i <= 5.0; i++) {
        printf("%3.2f \n", i);
    }
    for(char ch='a'; ch<='z'; ch++) {
        printf("%c \n", ch);
    }

    //While Loop
    int i = 1;
    while(i <= 5) {
        printf("%d \n", i);
        i++;
    }

    //do while Loop
    int i = 5;
    do {
        printf("%d \n", i);
        i--;
    } while(i >= 1);

    //using Break statement
    for(int i=1; i <= 5; i++) {
        if(i==3) {
            break; //exit
        }
       printf("%d \n", i);
    }
    printf("end");

    //using Continue statement
    for(int i = 1; i <= 5; i++) {
        if(i==3) {
            continue; //skip
        }
        printf("%d \n", i);
    }

    return 0;
}