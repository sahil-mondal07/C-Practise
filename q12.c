/* q10  print the pattern 

  *****
  *   *
  *   *
  *   *
  *****   */

  #include<stdio.h>
  int main(){
    int n,m;
    printf("enter the no. of rows : ");
    scanf("%d",&n);
    printf("enter the no. of col : ");
    scanf("%d",&m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0||i==n-1||j==0||j==m-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
  }