// creating a matrix program 3x3 ;-
#include<stdio.h>

int main(){
    int matrix1[4][3],matrix2[4][3],matrix3[4][3];
    int row,col;
    //for matrix 1
    printf("enter elements for matrix 1\n");
    for(row=0;row<4;row++){
        printf("enter element in %d row\n",row+1);
        for(col=0;col<3;col++){
            printf("enter element at %d %d place\n",row+1,col+1);
            scanf("%d",&matrix1[row][col]);
        }
    }
    //for matrix 2
    printf("enter elements for matrix 2\n");
    for(row=0;row<4;row++){
        printf("enter element in %d row\n",row+1);
        for(col=0;col<3;col++){
            printf("enter element at %d %d place\n",row+1,col+1);
            scanf("%d",&matrix2[row][col]);
        }
    }
    //addition 
    for(row=0;row<4;row++){
        for(col=0;col<3;col++){
            matrix3[row][col]=matrix1[row][col]+matrix2[row][col];
            printf("%d\t",matrix3[row][col]);
        }
        printf("\n");
    }
}