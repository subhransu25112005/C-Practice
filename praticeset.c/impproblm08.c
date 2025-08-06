include <stdio.h>
int main()
{ // Sum of first n natural number
    int n, i, sum;
    sum = 0;
    printf("Enter n\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of first %d natural number is %d", n, sum);
    return 0;
}