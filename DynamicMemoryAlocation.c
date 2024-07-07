#include<stdio.h>

//using 'sizeof' function
int main() {
    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));
    return 0;
}

//malloc()
#include<stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) malloc(5 * sizeof(int));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;

    for(int i=0; i<5; i++) {
        printf("%d\n", ptr[i]);
    }

    return 0;
}

//calloc()
#include<stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    for(int i=0; i<5; i++) {
        printf("%d\n", ptr[i]);
    }

    return 0;
}

//free()
#include<stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    for(int i=0; i<5; i++) {
        printf("%d\n", ptr[i]);
    }

    free(ptr);

    ptr = (int *) calloc(2, sizeof(int));
    for(int i=0; i<2; i++) {
        printf("%d\n", ptr[i]);
    }

    return 0;
}