//Write C program to cheak whether a number is even or odd using function.
#include<stdio.h>
#include<stdlib.h>
int evenodd(int number)
{
if(number%2==0)
printf("%d is an even number\n",number);
else
printf("%d is an odd number\n",number);
}
int main()
{
int num;
printf("Enter an integer: ");
scanf("%d", &num);
evenodd(num);
return 0;
}
