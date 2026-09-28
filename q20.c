#include <stdio.h>

int main(){
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x = 0;
    int y = 1;
    while(y < n){
        if(arr[x] == arr[y])
        {
            y++;
        }
        else
        {
            x++;
            arr[x] = arr[y];
            y++;
        }
    }
    int k = x + 1;
    printf("k = %d\n", k);
    printf("Array after removing duplicates: ");
    for(int i = 0; i < k; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
