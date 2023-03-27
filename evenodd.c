// CHEKING IF THE GIVEN NUMBER IS EVEN OR ODD
#include<stdio.h>
#include<conio.h>

int main(){
    int number1;
    printf("enter a number\n");
    scanf("%d",&number1);
    if(number1%2==0){
        printf("the number is even ");
    }
    else{
        printf("number is odd");
    }
    return 0;
}