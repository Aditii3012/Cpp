//Write a C program to find second largest element in an array.

#include <stdio.h>
#include <limits.h>
int main()
{
int arr[20];
int i, n;
int max = INT_MIN;

int secondmax = INT_MIN;

printf("Enter size of array: ");
scanf("%d", &n);
printf("Enter elements in array: ");
for(i=0; i<n-1; i++)
{
scanf("%d\n", &arr[i]);
}

for(i=0; i<n; i++){
if(arr[i]>max){
secondmax = max;

max = arr[i];
}

else if(arr[i]<max && arr[i]>secondmax){
secondmax = arr[i];
}
}
printf("Second largest element is %d",secondmax);
return 0;

}