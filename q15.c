/*q13 Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays. */

// my version  
/* 
#include<stdio.h>
int main(){
    int n,m;
    int median1,median2;
    int r1,r2;
    printf("enter the size of arr1 : ");
    scanf("%d",&n);
    printf("enter the size of arr2 : ");
    scanf("%d",&m);
    int arr1[n];
    int arr2[m];
    printf("enter the ele of the 1st arr : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter the ele of the 2nd array : ");
    for(int j=0;j<m;j++){
        scanf("%d",&arr2[j]);
    }

    // ya to dono arr odd honge , or n odd m even , or n even m odd , or dono even 

    if(n%2!=0 && m%2!=0){
        median1 = (n+1)/2;
        median2=(m+1)/2; 
    }
    else if(n%2!=0 && m%2==0){
        median1 = (n+1)/2; // odd formula 
        median2= (arr2[m/2 - 1] + arr2[m/2]) / 2; // even formula . m is the no. of obs.
    }
    else if (n%2==0 && m%2!=0)
    {
        median1= (arr1[n/2 - 1] + arr1[n/2]) / 2;
        median2= (m+1)/2;
    }
    else{
        median1= (arr1[n/2 - 1] + arr1[n/2]) / 2;
        median2= (arr2[m/2 - 1] + arr2[m/2]) / 2;
    }

    r1=median1;
    r2=median2;
    printf("pos of median of arr1 is : %d \n",r1);
    printf("pos of median of arr2 is : %d ",r2);
    return 0;
}   */





//We have two sorted arrays. We create one sorted array from them, then find the middle.

#include<stdio.h>
int main(){
    int n,m;
    printf("enter the size of arr1 : ");
    scanf("%d",&n);
    printf("enter the size of arr2 : ");
    scanf("%d",&m);
    int arr1[n];
    int arr2[m];
    printf("enter the ele of the 1st arr : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter the ele of the 2nd array : ");
    for(int j=0;j<m;j++){
        scanf("%d",&arr2[j]);
    }
    
    // dono sorted arrays ko merged kr rhe 
    int total = n+m;
    int merged[total];
    int z=0,l=0,k=0;
    while(z<n && l<m){
        if(arr1[z]<arr2[l]){
            merged[k]=arr1[z];
            z++;
        }
        else{
            merged[k]=arr2[l];
            l++;
        }
        k++;
    }

    while(z<n){
        merged[k]=arr1[z];
        z++;
        k++;
    }
    while(l<m){
        merged[k]=arr2[l];
        l++;
        k++;
    }

    double median;
    if(total%2!=0){
        median=(total+1)/2;
    }
    else{
        median=(merged[total/2 - 1] + merged[total/2]) / 2.0 ;
    }

    printf("median = %.2f ", median);
    return 0;
}