#include<stdio.h>
int main(){
//Cheak enter alphabates upper case or lower case??
char ch;
printf("Enter a character\n");
scanf("%c",&ch);
//In ascii table 97-122 value all cames upon lower case
if(ch>=97&&ch<=122){
    printf("The character  is lower case\n");
}
else
{
    printf("This character is not lower case");
}





    return 0;
}