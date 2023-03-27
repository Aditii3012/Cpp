//Write a C program to copy all elements from an array to another array.
#include <stdio.h>
int main()
{
int arr[20], New[20];
int i, size;
printf("Enter the size of the array: ");
scanf("%d", &size);
printf("Enter elements of array: ");
for(i=0; i<size; i++)
{
scanf("%d", &arr[i]);
}
for(i=0; i<size; i++)
{
New[i] = arr[i];
}
printf("\nElements of Old array are : ");
for(i=0; i<size; i++)
{
printf("%d\t", arr[i]);
}
printf("\nElements of New array are : ");
for(i=0; i<size; i++)
{
printf("%d\t", New[i]);
}
return 0;
}

