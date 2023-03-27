//Write C program to find all prime numbers Between given interval using function.
#include <stdio.h>
int printPrimes(int lowerLimit, int upperLimit)
{
printf("All prime number between %d to %d are: ", lowerLimit, upperLimit);
while(lowerLimit <= upperLimit)
{
if(isPrime(lowerLimit))
{
printf("%d, ", lowerLimit);
}
lowerLimit++;
}
}
int isPrime(int num)
{
int i;
for(i=2; i<=num/2; i++)
{
if(num % i == 0)
{
return 0;
}
}
return 1;
}

int main()
{
int lowerLimit, upperLimit;
printf("Enter the lower and upper limit for list primes: ");
scanf("%d%d", &lowerLimit, &upperLimit);
printPrimes(lowerLimit, upperLimit);
return 0;
}
