/*Write a program using a while loop that repeatedly asks the user to enter the password and stops only when the correct password is entered. Finally, display "Login successful!"*/

#include<stdio.h>
#include <string.h>
int main(){
    char givenpass[100];
    char realpass[]="sahil007";
    while(1>0){
        printf("enter pass : ");
        scanf("%s",givenpass);
        if(strcmp(givenpass, realpass) == 0){
            printf("login succesfull");
            break;
        }
    }
    return 0;
} 