/* Given an integer array arr and a target value target, find the indices of two elements whose sum equals target. 
 Assume exactly one valid pair exists, and the same element cannot be used twice.
 
 Input:
arr = [2, 7, 11, 15]
target = 9

Output:
[0, 1] */

#include<stdio.h>
int main(){
    int n;
    printf("enter how many num in the arry : ");
    scanf("%d",&n);
    int a[n];
    for(int k=0;k<n;k++){
        printf("enter the no. : ");
        scanf("%d",&a[k]);
    }
    int size=sizeof(a)/sizeof(a[0]);
    int target;
    printf("enter the target : ");
    scanf("%d",&target);
    int i,j;
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(a[i]+a[j]==target){
                printf("[%d,%d]", i, j);;
            }
        }
    }
    return 0;
}