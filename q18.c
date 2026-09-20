/*q 16 Chef is planning to setup a secure password for his Codechef account. 
For a password to be secure the following conditions should be satisfied:

1. Password must contain at least one lower case letter [a - z];

2. Password must contain at least one upper case letter [A-Z] strictly inside (first or the last character won't be considered)

3. Password must contain at least one digit [0- 9] strictly inside;

4. Password must contain at least one special character from the set { '@', '#', '%', '&', '?' } strictly inside;

5. Password must be at least 10 characters in length, but it can be longer.

Chef has generated several strings and now wants you to check whether the passwords are secure based on the above criteria.

Please help Chef in doing so. */

#include<stdio.h>
#include<string.h>
int main(){
    char pass[100];
    int lcase=0,ucase=0,ncase=0,specase=0,lencase=0;
    printf("enter your pass : ");
    scanf("%s",pass);
    int len = strlen(pass);
    for(int i = 0;i<len;i++){
        if(pass[i]>='a'&&pass[i]<='z'){        // 1 = ok and 0 = not ok 
            lcase=1;
        }
        
        if(i>0&&i<len-1){                      // lets say the i is just starting the loop and value is 0 so itll skip this whole i>0 cond. 
            if(pass[i]>='A'&&pass[i]<='Z'){
                ucase=1;
            }
            if(pass[i]>='0'&&pass[i]<='9'){
                ncase=1;
            }
            if(pass[i]=='@'||pass[i]=='#'||pass[i]=='%'||pass[i]=='&'||pass[i]=='?'){
                specase=1;
            }
        }

        if(len>=10){
            lencase=1;
        }
    }    
    if(lcase==1&&ucase==1&&ncase==1&&specase==1&&lencase==1){
        printf("Password is valid and secure .");
    }
    else{
        printf("Password is invalid. Please try again with a secure password . ");
    }
    return 0;
}