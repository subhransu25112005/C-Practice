#include <stdio.h>
int main()
{ // print multipication table of given number!
    int n;
    printf("Enter n\n");
    scanf("%d", &n);
    for (int i = 1; i < 11; i++)
    {
        printf("%dX%d=%d\n", n, i, n * i);
    }
    return 0;
}