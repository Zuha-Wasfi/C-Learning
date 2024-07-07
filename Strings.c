#include<stdio.h>

//Syntax
int main() {
    // char name[] = {'Z','U','H','A','\0'};
    char name[] = {"ZUHA"};
    return 0;
}

//String Format Specifier
void printString(char arr[]);
int main() {
    char name[50];
    scanf("%s", name);
    printf("Your name is %s", name);
    return 0;
}
void printString(char arr[]) {
    for(int i = 0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}

//String using Pointers
void printString(char arr[]);
int main() {
    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);
    return 0;
}
void printString(char arr[]) {
    for(int i = 0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}

//to print Length of the user's name
int namelength(char arr[]);
int main() {
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Length is: %d", namelength(name));
    return 0;
}
int namelength(char arr[]) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        count ++;
    }
    return count;
}
//using 'fgets'
int namelength(char arr[]);
int main() {
    char name[100];
    fgets(name, 100, stdin);
    printf("Length is: %d", namelength(name));
    return 0;
}
int namelength(char arr[]) {
    int count = 0;
    for(int i = 0; arr[i] != '\0'; i++) {
        count ++;
    }
    return count-1;
}

//Standard Library Functions
#include<string.h>
//using 'strlen(str)'
int main() {
    char name[] = "zuha";
    printf("length is : %d", strlen(name));
    return 0;
}
//using 'strcpy(newStr, oldStr)'
int main() {
    char newStr[] = "NEWSTR";
    char oldStr[] = "OLDSTR";
    strcpy(newStr, oldStr);
    puts(newStr);
    return 0;
}
//using 'strcat(firstStr, secStr)'
int main() {
    char firstStr[100] = "Hello ";
    char secStr[] = "World";
    strcat(firstStr, secStr);
    puts(firstStr);
    return 0;
}
//using 'strcmp(firstStr, secStr)'
int main() {
    char firstStr[] = "Apple";
    char secStr[] = "Banana";
    char Str1[] = "hhh";
    char Str2[] = "hhh";
    char Str3[] = "hh";
    printf("%d\n", strcmp(firstStr, secStr));
    printf("%d\n", strcmp(secStr, firstStr));
    printf("%d\n", strcmp(Str1, Str2));
    printf("%d\n", strcmp(Str1, Str3));
    return 0;
}