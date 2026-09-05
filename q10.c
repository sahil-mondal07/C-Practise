/*Question 8:
Given an m × n matrix, return all elements of the matrix in spiral order

Input 
[
 [1,  2,  3,  4],
 [5,  6,  7,  8],
 [9, 10, 11, 12]
]

Output 
[1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7] */

#include<stdio.h>
int main(){
    int rows,col;
    printf("enter no. of rows : ");
    scanf("%d",&rows);
    printf("enter no. of col : ");
    scanf("%d",&col);
    int matrix[rows][col];
    printf("enter the ele : ");
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

     int top =0;
    int bottom=rows-1;
    int left = 0;
    int right = col-1;

    while(top<=bottom&&left<=right){
            for(int k =left;k<=right;k++){
            printf("%d ",matrix[top][k]);
        }
        top++;

        for(int l=top ; l<=bottom;l++){
            printf("%d ",matrix[l][right]);
        }
        right--;
        if(top<=bottom){
            for(int m =right;m>=left;m--){
            printf("%d ",matrix[bottom][m]);
            }

            bottom--;
        }
        if(left<=right){
            for(int p=bottom;p>=top;p--){
            printf("%d ",matrix[p][left]);
             }
            left++;
        }
    }

    return 0;

}