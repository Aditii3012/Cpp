//13.Write a C program to find reverse of an array.
#include <stdio.h>
int main()
{
int a[100], b[100];
int n, c, d;
printf("Enter size of array\n");
scanf("%d", &n);
printf("Enter the array elements\n");
for (c = 0; c < n ; c++)
scanf("%d", &a[c]);
for (c = n - 1, d = 0; c >= 0; c--, d++)
b[d] = a[c];
for (c = 0; c < n; c++)
a[c] = b[c];
printf("Reverse array is\n");
for (c = 0; c < n; c++)
printf("%d\n", a[c]);
return 0;
}
