// program for leap year
#include<stdio.h>
#include<conio.h>
int main(){
    int year;
    printf("enter a year\n");
    scanf("%d",&year);
    if (year%100==0){
        if (year%400==0){
            printf("the given year is leap year \n");
        }
        else {
            printf("the given year is not a leap year \n");
        }
    }
    else if (year%4==0){
        printf("the given year is a leap year\n");
    }  else {
        printf("the year is not a leap year\n");
    }
    return 0;
}