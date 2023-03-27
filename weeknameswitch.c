//program to express the week name by day's chronological given number represent.
#include<stdio.h>
#include<conio.h>
int main(){
    int a;
    printf("enter a number between one to seven\n");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("the given number represent is Monday\n");
        break;
        case 2:
        printf("the given number represent is Tuesday\n");
        break;
        case 3:
        printf("the given number represent is Wednesday\n");
        break;
        case 4:
        printf("the given number represent is Thursday\n");
        break;
         case 5:
        printf("the given number represent is Friday\n");
        break;
         case 6:
        printf("the given number represent is Saturday\n");
        break;
         case 7:
        printf("the given number represent is Sunday\n");
        break;
        default:
        printf("the given given number represent is out of range\n");
    }
    return 0;
}