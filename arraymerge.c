//12.Write a C program to merge two array to third array.
#include<stdio.h>
#include<conio.h>
int main()
{
int arr1[50], arr2[50];

int size1, size2, i, k;
int merge[100];
printf("Enter Size Of First Array: ");
scanf("%d", &size1);
printf("Enter Elements of First Array: ");
for(i=0; i<size1; i++)
{
scanf("%d", &arr1[i]);
merge[i] = arr1[i];
}
k = i;
printf("\nEnter Size Of Second Array: ");
scanf("%d", &size2);
printf("Enter Elements of Second Array: ");
for(i=0; i<size2; i++)
{
scanf("%d", &arr2[i]);
merge[k] = arr2[i];
k++;
}
printf("\nArray After Merging First And Second:\n");
for(i=0; i<k; i++)
printf("%d ", merge[i]);
getch();
return 0;
}