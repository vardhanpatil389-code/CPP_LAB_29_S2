#include <stdio.h>

int main() {
    char name[50];
    int rollNo;
    char division;

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter your roll number: ");
    scanf("%d", &rollNo);

    printf("Enter your division: ");
    scanf(" %c", &division);   

    printf("\n--- Student Details ---\n");
    printf("Name      : %s\n", name);
    printf("Roll No   : %d\n", rollNo);
    printf("Division  : %c\n", division);

    return 0;
}