/*q14. given 2 arrays arr1 and arr2 . find out the smallest diff. bet. 2 arr ele */

#include<stdio.h>
int main(){
    int n,m;
    printf("enter the size of arr1 : ");
    scanf("%d",&n);
    printf("enter the size of arr2 : ");
    scanf("%d",&m);
    int arr1[n];
    int arr2[m];
    printf("enter the ele of arr1 : ");
    for(int i =0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter the ele of arr2 : ");
    for(int j =0;j<m;j++){
        scanf("%d",&arr2[j]);
    }

    int mindiff = arr1[0]-arr2[0];
    if(mindiff<0){
        mindiff=-mindiff;
    }

    for(int k=0;k<n;k++){
        for(int h=0;h<m;h++){
            int diff=arr1[k]-arr2[h];
            if(diff<0){
                diff=-diff;
            }
            if(diff<mindiff){
                mindiff=diff;
            }
        }
    }
    printf("minimum difference = %d", mindiff);

    return 0;
}