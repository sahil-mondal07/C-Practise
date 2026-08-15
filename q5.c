/* Given an array of daily temperatures, find the length of the longest consecutive strictly increasing streak.
Input:  [10, 12, 15, 14, 16, 18, 20]
Output: 4 
Explanation: 14, 16, 18, 20 is the longest increasing streak. */

#include <stdio.h>
int main(){
    int n;
    int cstreak=1;
    int longstreak=1;
    printf("enter the no. of temp : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){  //manually input dene ke liye in the array 
        printf("enter the temp : ");
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n;i++){ //iss part me array ka har ek ele ek dusre se compare hoga 
        if(arr[i]>arr[i-1]){
            cstreak++;
        }
        else{
            cstreak=1;
        }
        if (cstreak > longstreak) {
            longstreak = cstreak;
        }
    }
    
    printf("the longest increasing streak : %d ",longstreak);
    return 0;

}