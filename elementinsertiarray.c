//Write a C program to insert an element in an array.
#include <stdio.h>
int main()
{
int arr[100];
int i, size, num, pos;
printf("Enter size of the array: ");
scanf("%d", &size);
printf("Enter elements in array: ");
for(i=0; i<size; i++)
{
scanf("%d", &arr[i]);
}
printf("Element of Array are:\t");

for(i=0; i<size; i++)

{
printf("%d\t", arr[i]);
}
return 0;
}
 
