#include<stdio.h>

// //file pointer
// int main() {
//     FILE *fptr;
//     //opening a file
//     fptr = fopen("forFileInput&Output.txt", "r");
//     //closing a file
//     fclose(fptr);
//     return 0;
// }

// // opening a file to read without creating it
// int main() {
//     FILE *fptr;
//     fptr = fopen("forFileInput&Output2.txt", "r");
//     if(fptr == NULL) {
//         printf("File doesn't exit");
//     } else {
//         fclose(fptr);
//     }
//     return 0;
// }

// //opening a file to write without creating it
// int main() {
//     FILE *fptr;
//     fptr = fopen("forFileInput&Output2.txt", "w");
//     if(fptr == NULL) {
//         printf("File doesn't exit\n");
//     } else {
//         fclose(fptr);
//     }
//     return 0;
// }

// //Reading from a file
// int main() {
//     FILE *fptr;
//     fptr = fopen("forFileInput&Output.txt", "r");
//     char ch;
//     int num;
//     fscanf(fptr, "%c", &ch);
//     printf("character = %c\n", ch);
//     fscanf(fptr, "%c", &ch);
//     printf("character = %c\n", ch);
//     fscanf(fptr, "%c", &ch);
//     printf("character = %c\n", ch);
//     fscanf(fptr, "%c", &ch);
//     printf("character = %c\n", ch);
//     fscanf(fptr, "%c", &ch);
//     printf("character = %c\n", ch);
    
//     fscanf(fptr, "%d", &num);
//     printf("character = %d\n", num);
//     fscanf(fptr, "%d", &num);
//     printf("character = %d\n", num);
    
//     fclose(fptr);
//     return 0;
// }

// //Writing to a file
// int main() {
//     FILE *fptr;
//     fptr = fopen("forFileInput&Output.txt", "w");
    
//     fprintf(fptr, "%c", 'M');
//     fprintf(fptr, "%c", 'a');
//     fprintf(fptr, "%c", 'n');
//     fprintf(fptr, "%c", 'g');
//     fprintf(fptr, "%c", 'o');
    
//     fclose(fptr);
//     return 0;
// }

// //using 'append' for a file
// int main() {
//     FILE *fptr;
//     fptr = fopen("forFileInput&Output.txt", "a");
    
//     fprintf(fptr, "%c", 'G');
//     fprintf(fptr, "%c", 'u');
//     fprintf(fptr, "%c", 'a');
//     fprintf(fptr, "%c", 'v');
//     fprintf(fptr, "%c", 'a');
    
//     fclose(fptr);
//     return 0;
// }

// //Read a char - using 'fgetc'
// int main() {
//     FILE *fptr;
//     fptr = fopen("forFileInput&Output.txt", "r");
    
//     printf("%c\n", fgetc(fptr));
//     printf("%c\n", fgetc(fptr));
//     printf("%c\n", fgetc(fptr));
//     printf("%c\n", fgetc(fptr));
//     printf("%c\n", fgetc(fptr));
    
//     fclose(fptr);
//     return 0;
// }

// //Write a char - using 'fputc'
// int main() {
//     FILE *fptr;
//     fptr = fopen("forFileInput&Output.txt", "w");
    
//     fputc('M', fptr);
//     fputc('a', fptr);
//     fputc('n', fptr);
//     fputc('g', fptr);
//     fputc('o', fptr);
    
//     fclose(fptr);
//     return 0;
// }

//EOF (End Of File)
int main() {
    FILE *fptr;
    fptr = fopen("forFileInput&Output.txt", "r");
    char ch;
    ch = fgetc(fptr);
    while(ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}