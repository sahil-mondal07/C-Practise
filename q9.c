/* Question 7:
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.

Example 1:

Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2
Example 2:

Input: nums = [3,3,7,7,10,11,11]
Output: 10 */

#include<stdio.h>
int main(){
    int n;
    int a[n];
    printf("enter the size of the array : ")
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter ele (must be in sorted way) : ")
        scanf("%d",a[i]);
    }
    int left = 0;
    int right = n - 1;
    while (left < right) {

        int mid = (left + right) / 2;
        if (mid % 2 != 0) {
            mid--;
        }
        if (a[mid] == a[mid + 1]) {
            left = mid + 2;
        }
        else {
            right = mid;
        }
    }
    printf("Single element: %d", a[left]);
    return 0;
}
