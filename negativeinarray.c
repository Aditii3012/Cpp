//Write a C program to print all negative elements in an array.
#include <stdio.h>
int main()
{
int arr[20];
int i, n;
printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter elements in array: ");
for(i=0; i<n-1; i++)
{
scanf("%d\n", &arr[i]);
}
printf("Negative elements in array are: ");
for(i=0; i<n; i++)
{
if(arr[i] < 0)
{
printf("%d\t", arr[i]);
}
}
return 0;
}
