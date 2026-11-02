// *
// **
// ***
// ****
// *****

#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){//lines
        for(int j=1;j<=i;j++){ //star
          printf("*");
        }
        printf("\n");
    }
     return 0;
}