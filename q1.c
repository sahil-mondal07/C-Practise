//Write a C program that accepts a positive integer containing digits from 0 to 9. Exactly one digit is missing, while the remaining nine digits appear exactly once. 
/*Input : 854102967
Output:  3*/

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 0; i <= 9; i++) {
        int temp = num;
        int found = 0;
        while (temp > 0) {

            int e = temp % 10;

            if (e == i) {
                found = 1;
                break;
            }

            temp = temp / 10;
        }
        if (found == 0) {
            printf("Missing digit: %d\n", i);
            break;
        }
    }
    return 0;
}
