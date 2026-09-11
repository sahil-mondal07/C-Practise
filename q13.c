/*Q11 square every element and return it sorted , without sorting again 
inp - [4,3,5,1,2,3]
oup- [1,4,9,9,16,25] */

// we are using two pointer method in this problem , which req. sorted array as the input.

#include<stdio.h>
int main(){
    int n;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter the ele of array(in sorted manner) : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    int result[n];
    int left=0;
    int right =n-1;
    int pos=n-1;

    while(left <= right){
        if(arr[left]*arr[left] > arr[right]*arr[right]){
                result[pos]=arr[left]*arr[left];
                left++;
        }
        else{
            result[pos]=arr[right]*arr[right];
            right--;
        }
        pos--;
    }
    for(int j=0;j<n;j++){
        printf("%d ",result[j]);
    }
    
    return 0;

}