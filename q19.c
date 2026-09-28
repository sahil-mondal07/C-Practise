#include <stdio.h>
#include <string.h>

int main(){
    char string[100];
    printf("Enter string: ");
    scanf("%s",string);

    int n = strlen(string);

    int visited[256] = {0};

    int left = 0;
    int maxLength = 0;

    for(int right = 0; right < n; right++){
        while(visited[(unsigned char)string[right]] == 1){
            visited[(unsigned char)string[left]] = 0;
            left++;
        }

        visited[(unsigned char)string[right]] = 1;

        int length = right - left + 1;

        if(length > maxLength){
            maxLength = length;
        }
    }
    printf("Length of longest substring without duplicate characters = %d\n",maxLength);
    return 0;
}
