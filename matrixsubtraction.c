//21. Write a C program to subtract two matrices.
#include <stdio.h>
int main() {
int r, c, i, j;

int a[100][100], b[100][100];
int sum[100][100];
printf("Enter the number of rows: ");
scanf("%d", &r);
printf("Enter the number of columns: ");
scanf("%d", &c);
printf("\nEnter elements of 1st matrix:\n");
for (i = 0; i < r; ++i)
for (j = 0; j < c; ++j) {
printf("Enter element a%d%d: ", i + 1, j + 1);
scanf("%d", &a[i][j]);
}
printf("Enter elements of 2nd matrix:\n");
for (i = 0; i < r; ++i)
for (j = 0; j < c; ++j) {
printf("Enter element b%d%d: ", i + 1, j + 1);
scanf("%d", &b[i][j]);
}
for (i = 0; i < r; ++i)
for (j = 0; j < c; ++j) {
sum[i][j] = a[i][j] - b[i][j];
}
printf("\nSubtraction of two matrices: \n");
for (i = 0; i < r; ++i)
for (j = 0; j < c; ++j) {
printf("%d ", sum[i][j]);
if (j == c - 1) {
printf("\n\n");
}
}
return 0;
}
