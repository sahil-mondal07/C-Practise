/*remove duplicates from sorted array , without using any extra space */

//similar concept of 2 pointers.

#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the ele of the array(in sorted way) : ");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x=0;
    int y=x+1;
    while(y<n){
        if(arr[x]==arr[y]){
            y++;
        }
        else{
            x++;
            arr[x]=arr[y];
            y++;
        }
    }
    for(int j=0;j<=x;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}