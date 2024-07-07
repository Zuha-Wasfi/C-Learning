#include<stdio.h>

int main() {
    //basic
    int marks[3];
    printf("Enter phy: ");
    scanf("%d", &marks[0]);

    printf("Enter che: ");
    scanf("%d", &marks[1]);

    printf("Enter math: ");
    scanf("%d", &marks[2]);

    printf("phy = %d, che = %d, math = %d", marks[0], marks[1], marks[2]);

    //pointer arithmetic
    //int value
    int age = 18;
    int *ptr = &age;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);
    //float value
    float price = 100.00;
    int *ptr = &price;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);
    //char value
    char star = '*';
    int *ptr = &star;
    printf("ptr = %u\n", ptr);
    ptr++;
    printf("ptr = %u\n", ptr);
    ptr--;
    printf("ptr = %u\n", ptr);
    //operation & comparison
    int age = 18;
    int _age = 20;
    int *ptr = &age;
    int *_ptr = &_age;
    printf("%u, %u, difference = %u\n", ptr, _ptr, ptr-_ptr);
    _ptr = &age;
    printf("comparison = %u\n", ptr == _ptr);

    //traverse an array
    int aadhar[5];

    int *ptr = &aadhar[0]; //input
    for(int i=0; i<5; i++) {
        printf("%d index : ", i);
        scanf("%d", &aadhar[i]);
    }
    
    for(int i=0; i<5; i++) { //output
        printf("%d index : %d\n", i, aadhar[i]);
    }

    return 0;
}

//arrays as function argument
    void printNumbers(int arr[], int n);

    int main () {
        int arr[] = {1, 2, 3, 4, 5, 6};
        printNumbers(arr, 6);
        return 0;
    }

    void printNumbers(int arr[], int n) {
        for (int i=0; i<n; i++) {
            printf("%d \t", arr[i]);
        }
        printf("\n");
    }

//2D arrays
int main() {
    int marks[2][3];
    marks[0][0] = 98;
    marks[0][1] = 97;
    marks[0][2] = 96;

    marks[1][0] = 95;
    marks[1][1] = 94;
    marks[1][2] = 93;

    printf("%d", marks[0][0]);

    return 0;
}