#include<stdio.h>
#include<conio.h>

int main()
{
    int a, b, c;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter a number to compare\n");
    scanf("%d",&b);
    printf("enter the last number you wish to compare\n");
    scanf("%d",&c);
    if (a>b){
        if(a>c){
            printf("%d is the greatest number\n",a);
        }
        else{
            printf("%d is the greatest number\n",c);
        }
    }
    else if (b>c){
        printf("%d is the greatest number\n",b);
    }
    else {
        printf("%d is the greatsest number\n",c);
    }
    return 0;
}