#include <stdio.h>
int main()
{
 int num1, num2;
 int add, sub, mult, mod;
 float div;
 printf("Enter any two numbers: ");
 scanf("%d%d", &num1, &num2);
 add = num1 + num2;
 sub = num1 - num2;
 mult = num1 * num2;
 div = (float)num1 / num2;
 mod = num1 % num2;
 printf("Addition = %d\n", add);
 printf("Substraction = %d\n", sub);
 printf("Multiplication = %d\n", mult);
 printf("Division = %f\n", div);
 printf("MODULUS = %d", mod);
 return 0; 
}
