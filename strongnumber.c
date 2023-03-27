//1Write C program to find all Armstrong numbers Between given interval using. 
#include <stdio.h>
int isArmstrong(int num)
{
int temp, lastDigit, sum;
temp = num;
sum = 0;
while(temp != 0)
{
lastDigit = temp % 10;
sum += lastDigit * lastDigit * lastDigit;
temp /= 10;
}
if(num == sum)
return 1;
else
return 0;
}
void printArmstrong(int start, int end)
{
while(start <= end)
{
if(isArmstrong(start))
{
printf("%d, ", start);
}
start++;
}
}
int main()
{
int start, end;
printf("Enter lower limit for armstrong numbers: ");
scanf("%d", &start);
printf("Enter upper limit for armstrong numbers: ");
scanf("%d", &end);
printf("All armstrong numbers between %d to %d are: \n", start, end);
printArmstrong(start, end);
return 0;
}
