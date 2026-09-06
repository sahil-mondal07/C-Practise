/*q9 . 
rotate the array of length n and an integer k . we need to rotate the array by k steps to the right 
k=3
input : {1,2,3,4,5,6,7}
output : {5,6,7,1,2,3,4}
*/

#include<stdio.h>
int main(){
    int n;
    int k;
    printf("enter the length of the array : ");
    scanf("%d",&n);
    printf("enter k : ");
    scanf("%d",&k);

    int arr[n];
    printf("enter ele of array : ");
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int left=0;
    int right=n-1;
    int temp;
    //reversing the whole array
    while(left<right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]= temp;

        left++;
        right--;
    }
//reversing till k 
    int newleft=0;
    int newright=k-1;
    int temp2;
    while(newleft<newright){
        int temp2=arr[newleft];
        arr[newleft]=arr[newright];
        arr[newright]=temp2;

        newleft++;
        newright--;
    }

// reversing the sec part (the reamining part)
    int nleft=k;
    int nright=n-1;
    int temp3;
    while(nleft<nright){
        int temp3=arr[nleft];
        arr[nleft]=arr[nright];
        arr[nright]=temp3;

        nleft++;
        nright--;

    }

    for(int i = 0; i < n; i++){
    printf("%d ", arr[i]);
    }   

    return 0;
}