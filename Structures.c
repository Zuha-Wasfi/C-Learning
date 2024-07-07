#include<stdio.h>

//syntax
//user defined
#include<string.h>
struct student {
    char name[100];
    int roll;
    float cgpa;
};
int main() {
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    //s1.name = "zuha";
    strcpy(s1.name, "zuha");
    printf("student name = %s\n", s1.name);
    printf("student roll no. = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
    return 0;
}

//program to store data of 3 students
#include<string.h>
struct student {
    char name[100];
    int roll;
    float cgpa;
};
int main() {
    struct student s1;
    strcpy(s1.name, "zuha");
    s1.roll = 1660;
    s1.cgpa = 9.2;
    printf("student1 name = %s\n", s1.name);
    printf("student1 roll no. = %d\n", s1.roll);
    printf("student1 cpga = %f\n", s1.cgpa);
    struct student s2;
    strcpy(s2.name, "rammaz");
    s2.roll = 1661;
    s2.cgpa = 9.4;
    printf("student2 name = %s\n", s2.name);
    printf("student2 roll no. = %d\n", s2.roll);
    printf("student2 cgpa = %f\n", s2.cgpa);
    struct student s3;
    strcpy(s3.name, "mummy");
    s3.roll = 1662;
    s3.cgpa = 8.7;
    printf("student3 name = %s\n", s3.name);
    printf("student3 roll no. = %d\n", s3.roll);
    printf("student3 cgpa = %f\n", s3.cgpa);
    return 0;
}

//Array of Structures
#include<string.h>
struct student {
    char name[100];
    int roll;
    float cgpa;
};
int main() {
    struct student ECE[100];
    strcpy(ECE[0].name, "zuha");
    ECE[0].roll = 1664;
    ECE[0].cgpa = 9.4;
    printf("ECE student1 name = %s\n", ECE[0].name);
    printf("ECE student1 roll no. = %d\n", ECE[0].roll);
    printf("ECE student1 cgpa = %f\n", ECE[0].cgpa);
    return 0;
}

//Initializing Structures
struct student {
    char name[100];
    int roll;
    float cgpa;
};
int main() {
    struct student s1 = {"Zuha", 1661, 9.2};
    struct student s2 = {"Rammaz", 1662, 9.4};
    struct student s3 = {0};
    printf("Student1 roll no. = %d\n", s1.roll);
    printf("Student2 name = %s\n", s2.name);
    printf("Student3 name = %s\n", s3.name);
    printf("Student3 roll no. = %d\n", s3.roll);
    return 0;
}

//pointers to stuctures
struct student {
    char name[100];
    int roll;
    float cgpa;
};
int main() {
    struct student s1 = {"Zuha", 1661, 9.2};
    struct student *ptr = &s1;
    printf("Student1 roll no. with ptr = %d\n", (*ptr).roll);
    return 0;
}

//Arrow Operator
struct student {
    char name[100];
    int roll;
    float cgpa;
};
int main() {
    struct student s1 = {"Zuha", 1661, 9.2};
    struct student *ptr = &s1;
    printf("Student1->roll no. = %d\n", ptr->roll);
    return 0;
}

//passing structures to functions
struct student {
    char name[100];
    int roll;
    float cgpa;
};
void printInfo(struct student s1);
int main() {
    struct student s1 = {"Zuha", 1660, 9.2};
    printInfo(s1);
    return 0;
}
void printInfo(struct student s1) {
    printf("student information : \n");
    printf("student name = %s\n", s1.name);
    printf("student roll = %d\n", s1.roll);
    printf("student cgpa = %f\n", s1.cgpa);
}

//'typedef' Keyword
typedef struct student {
    char name[100];
    int roll;
    float cgpa;
} stu;
int main() {
    stu s1 = {"Zuha", 1661, 9.3};
    printf("Student name = %s\n", s1.name);
    return 0;
}

//to print address(house no., block, city, state) of 5 people
struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};
void printAddress(struct address adds);
int main() {
    struct address adds[5];
    printf("Enter info for person 1: ");
    scanf("%d", &adds[0].houseNo);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);
    printf("Enter info for person 2: ");
    scanf("%d", &adds[1].houseNo);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);
    printf("Enter info for person 3: ");
    scanf("%d", &adds[2].houseNo);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);
    printf("Enter info for person 4: ");
    scanf("%d", &adds[3].houseNo);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);
    printf("Enter info for person 5: ");
    scanf("%d", &adds[4].houseNo);
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);
    printAddress(adds[0]);
    printAddress(adds[1]);
    printAddress(adds[2]);
    printAddress(adds[3]);
    printAddress(adds[4]);
    return 0;
}
void printAddress(struct address adds) {
    printf("Address is : %d, %d, %s, %s\n", adds.houseNo, adds.block, adds.city, adds.state);
}