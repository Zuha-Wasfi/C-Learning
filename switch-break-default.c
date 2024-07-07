#include<stdio.h>

int main() {
    int day; //1-mon; 2-tues, 3-wed, and so on...
    printf("enter a day(1-7)");
    scanf("%d", &day);

    switch (day)
    {
    case 1 : printf("monday");
        break;
    
    case 2 : printf("tuesday");
        break;
    case 3 : printf("wednesday");
        break;
    case 4 : printf("thursday");
        break;
    case 5 : printf("friday");
        break;
    case 6 : printf("saturday");
        break;
    case 7 : printf("sunday");
        break;
    default : printf("not a valid day");                        
    }

    return 0;
}