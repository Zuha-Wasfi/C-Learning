#include<stdio.h>

int main() {
    int age;
    printf("enter an age");
    scanf("%d", &age);
    if(age >= 18) {
        printf("The person is an adult \n");
        printf("This person acn drive \n");
        printf("The person can vote\n");
    }
    else if(age >= 13 && age < 18) {
        printf("The person is a teenager");
    }
    else {
        printf("The person is a child");
    }
    printf("Thank You");
    return 0;
}