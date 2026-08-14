/* *
   ** 
   ***
   **** 
   ***** */
#include<stdio.h>
int main(){
    int n;
    printf("how many rows to print : ");
    scanf("%d",&n);
    for(int i=1;i<n+1;i++){
        for(int j=1;j<=i;j++){ //if j<i given then it prints 1 row less as it runs from 1 to 4 
            printf("*");
        }
    printf("\n");
    }
    return 0;
}