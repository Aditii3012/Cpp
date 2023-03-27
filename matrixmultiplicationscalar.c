//22. Write a C program to perform Scalar matrix multiplication.
#include<stdio.h>
int main()
{
int i, j, rows, columns;
int Multiplication[10][10];
int Number;
printf("Enter Number of rows and columns\n");
scanf("%d %d", &i, &j);
printf("\nEnter the Matrix Elements \n");
for(rows = 0; rows < i; rows++)
{
for(columns = 0;columns < j;columns++)
{
scanf("%d", &Multiplication[rows][columns]);
}
}
printf("\nEnter the Multiplication Value : ");
scanf("%d", &Number);
for(rows = 0; rows < i; rows++)
{
for(columns = 0; columns < j; columns++)
{
Multiplication[rows][columns] = Number * Multiplication[rows][columns];
}
}
printf("\nResult of a Scalar Matrix Multiplication is : \n");
for(rows = 0; rows < i; rows++)
{
for(columns = 0; columns < j; columns++)
{
printf("%d \t ", Multiplication[rows][columns]);
}
printf("\n");
}
return 0;
}
