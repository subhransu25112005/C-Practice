#include <stdio.h>
int main()
{
    // enter the mark of 3 subject of student and determine pass and fail??
    int mark1, mark2, mark3;
    printf("Enter marks1\n");
    scanf("%d", &mark1);
    printf("Enter mark2\n");
    scanf("%d", &mark2);
    printf("Enter mark3\n");
    scanf("%d", &mark3);
    printf("The marks are %d %d and %d\n", mark1, mark2, mark3);
    if (mark1 < 33 || mark2 < 33 || mark3 < 33)
    {
        printf("You are fail due to less mark in individual subject\n");
        printf("Try next year");
    }
    else if ((mark1 + mark2 + mark3) / 3 < 40)
    {
        printf("You are fail due to overlar leass percentage");
    }
    else
    {
        printf("Congratulation!You are Passed");
    }
    return 0;
}