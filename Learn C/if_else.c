#include<stdio.h>

int main(){
int h;
printf("Enter Height");
scanf("%d",&h);
if(h<=7){
    printf("You are not eligible\n");
    printf("Try for next year\n");
}else{
    printf("You are eligible");
      
}
return 0;

}