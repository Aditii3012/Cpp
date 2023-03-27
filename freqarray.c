//.Write a C program to count frequency of each element in an array.
#include <stdio.h>
int main()
{
int arr1[100], freq[100];
int n, i, j, flag;
printf("Enter Elements in array :");
scanf("%d",&n);
printf("Enter %d elements in the array :\n",n);
for(i=0;i<n;i++)
{
printf("Element %d : ",i);
scanf("%d",&arr1[i]);
freq[i] = -1;
}
for(i=0; i<n; i++)
{
flag = 1;
for(j=i+1; j<n; j++)
{
if(arr1[i]==arr1[j])
{
flag++;
freq[j] = 0;
}
}
if(freq[i]!=0)
{
freq[i] = flag;
}
}
printf("\nThe frequency of all elements of array : \n");
for(i=0; i<n; i++)
{
if(freq[i]!=0)
{
printf("%d occurs %d times\n", arr1[i], freq[i]);
}
}
return 0;
}
 
