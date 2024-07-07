#include<stdio.h>

int main() {
    //syntax
    int age = 18;
    int *ptr = &age;
    int _age = *ptr;
    printf("%d", _age);

    //format specifier
    int age = 18;
    int *ptr = &age;
    //address
    //printf("%p\n", &age);
    printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%u\n", &ptr);
    //value
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

    //pointer to pointer
    float price = 20.00;
    float *ptr = &price;
    float **pptr = &ptr;
    printf("%d\n", **pptr);

    return 0;
}

// pointers in function call
//call by value
void square(int n);
int main() {
    int number = 4;
    square(number);
    printf("number = %d\n", number);
    return 0;
}
void square(int n) {
    n = n * n;
    printf("square = %d\n", n);
}
//call by reference
void _square(int *n);
int main() {
    int number = 4;
    _square(&number);
    printf("number = %d\n", number);
    return 0;
}
void _square(int *n) {
    *n = (*n) * (*n);
    printf("square = %d\n", *n);
}