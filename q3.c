// Take a year as input and check if it's a leap year 
#include<stdio.h>
int main(){
    int year;
    printf("enter year : ");
    scanf("%d",&year);
    if((year%4==0) && (year%100!=0)){
        printf("leap year");
    }
    else if(year%400==0)
    {
        printf("leap year");
    }
    else{
        printf("not a leap year");
    }
    return 0;
    
}

