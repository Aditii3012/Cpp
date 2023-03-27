#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("enter a number between one to seven\n");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("the number is one\n");
        break;
        case 2:
        printf("the number is two\n");
        break;
        case 3:
        printf("the number is three\n");
        break;
        case 4:
        printf("the number is four\n");
        break;
         case 5:
        printf("the number is five\n");
        break;
         case 6:
        printf("the number is six\n");
        break;
         case 7:
        printf("the number is seven\n");
        break;
        default:
        printf("the given number is out of range\n");
    }
    return 0;
}