#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter your letter grade: ");

    char myGrade;
    scanf("%c", &myGrade);

    switch(myGrade)
    {
    case 'A':
    case 'a':
        printf("Great job!");
        break;
    case 'B':
    case 'b':
        printf("Good job!");
        break;
    case 'C':
    case 'c':
        printf("OK job!");
        break;
    case 'D':
    case 'd':
        printf("Needs improvement!");
        break;
    case 'F':
    case 'f':
        printf("Try harder!");
        break;
    default:
        printf("No known letter grade.\n");
        break;
    }
 return 0;
}
