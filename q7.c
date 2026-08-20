/*Day 5 question:

Input a number from the user and print
a. Number of 1 and number of 0 in its binary representation.
b. Number of consecutive 1 in the binary representation.

Input:  [1,1,0,1,1,1]
Output:  a   5 and 1
               b 3
*/

#include<stdio.h>
int main(){
    int n1;
    int current=0;
    int longest=0;
    int cof1=0;
    int cof0=0;
    printf("enter n1 : ");
    scanf("%d",&n1);
    while(n1>0){
        int bit = n1%2;
        if(bit==1){
            cof1++;
            current++;
            if(current>longest){
                longest = current;
            }
        }
        else{
            cof0++;
            current=0;
        }
        n1=n1/2;
    }
    printf("the count of 1 : %d \n",cof1);
    printf("the count of 0 : %d \n", cof0);
    printf("longest consecutive 1 : %d", longest);
    return 0;

}
