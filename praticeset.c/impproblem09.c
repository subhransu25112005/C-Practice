#include<stdio.h>
int main(){
    int fact,n;
    fact = 1;
    printf("Enter n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact *=i;
    }
    printf("The factorial is %d",fact);
    return 0;
}