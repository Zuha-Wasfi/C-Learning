#include<stdio.h>

int maint() {
    int number;
    printf("enter number : ");
    scanf("%d", &number);
    
    if(number >= 0) {
        printf("positive \n");
        if(number %2 == 0) {
            printf("even \n");
        }
        else {
                printf("odd \n");
        }    
    }
    else {
        printf("negative \n");
    }    
    return 0;
    }